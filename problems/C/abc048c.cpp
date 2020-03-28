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
    ll n,x;
    cin >> n >> x;
    VL a(n);
    rep(i,n) cin >> a[i];
    
    ll ans = 0;
    rep(i,n-1){
        if(a[i]+a[i+1] > x){
            ll diff = a[i] + a[i+1] - x;
            ans += diff;
            if(diff <= a[i+1]){
                a[i+1] -= diff;
            }else{
                diff -= a[i+1];
                a[i+1] = 0;
                a[i] -= diff;
            }
        }
    }
    cout << ans << endl;

    return 0;
}