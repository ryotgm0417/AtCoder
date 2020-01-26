#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int H,n;
  cin >> H >> n;
  VI a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];

  VVI dp(n,VI(H+1,1001001001));

  rep(h,H+1){
    dp[0][h] = (h+a[0]-1)/a[0]*b[0];
  }

  rep(i,n-1){
    rep(h,H+1){
      dp.at(i+1).at(h) = min( dp.at(i).at(h), dp.at(i+1).at(max(0,h-a[i+1]))+b[i+1] );
    }
  }

  /*
  rep(i,n){
    rep(j,H+1){
      cout << dp[i][j];
    }
    cout << endl;
  }
  */

  cout << dp[n-1][H] << endl;

  return 0;
}
