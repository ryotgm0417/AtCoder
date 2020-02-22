#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int dp[2][110];

int main(){
	int n;
    cin >> n;
    int a[n], b[n];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    dp[0][0] = 0;
    dp[1][0] = 0;
    rep2(i,1,n+1){
        dp[0][i] = dp[0][i-1] + a[i-1];
    }
    rep2(i,1,n+1){
        dp[1][i] = max(dp[0][i], dp[1][i-1]) + b[i-1];
    }

    cout << dp[1][n] << endl;

	return 0;
}