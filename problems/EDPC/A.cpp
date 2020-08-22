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

// Yes-Noを出力する問題で楽をする
void Ans(bool f){
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

//---------------------------

int main(){
    ll n; cin >> n;
    VL h(n);
    rep(i,n) cin >> h[i];

    VL dp(n,0);
    dp[1] = abs(h[1] - h[0]);
    rep2(i,2,n){
        ll cost1 = dp[i-1] + abs(h[i] - h[i-1]);
        ll cost2 = dp[i-2] + abs(h[i] - h[i-2]);
        dp[i] = min(cost1, cost2);
    }

    cout << dp[n-1] << endl; 

    return 0;
}