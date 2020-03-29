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
    ll n;
    cin >> n;
    VVL test(n, VL(n,-1));

    rep(i,n){
        ll a;
        cin >> a;
        rep(j,a){
            ll x,y;
            cin >> x >> y;
            test[i][x-1] = y;
        }
    }

    ll ans = 0;
    rep(bit,1<<n){
        ll num = 0;
        bool flag = true;
        set<ll> honest;
        rep(i,n){
            if(bit & (1<<i)) honest.insert(i);
        }
        for(auto h : honest){
            rep(x,n){
                if(test[h][x]==1 && !honest.count(x)) flag = false;
                if(test[h][x]==0 && honest.count(x)) flag = false;
            }
        }
        if(flag){
            chmax(ans,honest.size());
        }
    }

    cout << ans << endl;
    return 0;
}