#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n,k;
  cin >> n >> k;
  VI h(n);
  rep(i,n) cin >> h[i];

  sort(h.begin(), h.end());

  int ans = h[n-1] - h[0];
  rep(i,n-k+1){
    int hmin = h[i];
    int hmax = h[k+i-1];
    ans = min(ans, hmax-hmin);
  }

  cout << ans;

  return 0;
}
