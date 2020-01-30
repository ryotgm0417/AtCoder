#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  VI v(n);
  rep(i,n) cin >> v[i];

  sort(v.begin(),v.end());

  double ans = v[0];
  rep(i,n-1){
  	ans = (ans + v[i+1]) / 2;
  }

  cout << setprecision(12) << ans << endl;

  return 0;
}
