#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using P = pair<ll, ll>;

// chmin, chmax関数
template<typename T, typename U, typename Comp=less<>>
bool chmax(T& xmax, const U& x, Comp comp={}) {
    if(comp(xmax, x)) {
        xmax = x;
        return true;
    }
    return false;
}
template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}

//---------------------------

int main(){
    ll n, tmp=0;
    cin >> n;
    VL sum(n);
    rep(i,n){
        ll a;
        cin >> a;
        tmp += a;
        sum[i] = tmp;
    }

    ll ans = (ll)1 << 60; // INF

    // even is pos, odd is neg
    ll accum = 0, cnt = 0;
    if(sum[0] <= 0){
        accum = 1 - sum[0];
        cnt = abs(accum);
    }
    rep2(i,1,n){
        ll x = sum[i] + accum;
        if(i%2==0 && x <= 0){
            accum += abs(x) + 1;
            cnt += abs(x) + 1;
        }else if(i%2==1 && x >= 0){
            accum -= abs(x) + 1;
            cnt += abs(x) + 1;
        }
    }
    chmin(ans, cnt);

    // even is neg, odd is pos
    accum = 0, cnt = 0;
    if(sum[0] >= 0){
        accum = - 1 - sum[0];
        cnt = abs(accum);
    }
    rep2(i,1,n){
        ll x = sum[i] + accum;
        if(i%2==0 && x >= 0){
            accum -= abs(x) + 1;
            cnt += abs(x) + 1;
        }else if(i%2==1 && x <= 0){
            accum += abs(x) + 1;
            cnt += abs(x) + 1;
        }
    }
    chmin(ans, cnt);

    cout << ans << endl;

    return 0;
}