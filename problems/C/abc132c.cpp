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
  VI d(n);
  rep(i,n) cin >> d[i];

  sort(d.begin(),d.end());
  int ans=0;
  rep(k,100010){
    VI::iterator low = lower_bound(d.begin(),d.end(),k);
    if(low - d.begin() == n/2) ans++;
  }

  cout << ans << endl;

  return 0;
}
