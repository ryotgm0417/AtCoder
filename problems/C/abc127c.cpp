#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n,m;
  cin >> n >> m;
  VI l(m),r(m);
  rep(i,m){
    cin >> l[i] >> r[i];
  }

  int left=0, right=n+1;
  rep(i,m){
    left = max(left, l[i]);
    right = min(right, r[i]);
  }

  cout << max(0, (right-left+1)) << endl;

  return 0;
}
