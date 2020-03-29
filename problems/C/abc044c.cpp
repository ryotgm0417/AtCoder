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

ll dp[55][55][2510];

int main(){
    ll n,a;
    cin >> n >> a;
    VL x(n);
    rep(i,n){
        cin >> x[i];
    }
    
    // ll dp[55][55][2510];

    rep(i,n)rep(j,n+1)rep(k,2510) dp[i][j][k] = 0;

    rep(i,n) dp[i][0][0] = 1;
    dp[0][1][x[0]] = 1;

    rep2(i,1,n)rep2(j,1,n+1)rep(k,2510){
        if(k >= x[i]){
            dp[i][j][k] = dp[i-1][j][k] + dp[i-1][j-1][k-x[i]];
        }else{
            dp[i][j][k] = dp[i-1][j][k];
        }
    }

    ll ans = 0;
    rep2(j,1,n+1){
        ans += dp[n-1][j][a*j];
    }

    cout << ans << endl;

    return 0;
}