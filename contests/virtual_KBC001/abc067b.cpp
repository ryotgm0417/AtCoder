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
  VI l(n);
  rep(i,n) cin >> l[i];

  sort(l.begin(), l.end(), greater<int>());

  int ans=0;
  rep(i,k){
    ans += l[i];
  }

  cout << ans;

  return 0;
}
