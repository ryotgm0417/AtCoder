#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n,m;
  cin >> n >> m;
  VI x(m);
  rep(i,m) cin >> x[i];

  if(n >= m){
    cout << 0;
    return 0;
  }

  sort(x.begin(), x.end());

  int ans = x[m-1] - x[0];

  VI d(m-1);
  rep(i,m-1){
    d[i] = x[i+1] - x[i];
  }

  sort(d.begin(), d.end(), greater<int>());

  rep(i,n-1){
    ans -= d[i];
  }

  cout << ans;

  return 0;
}
