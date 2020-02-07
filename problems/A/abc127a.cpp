#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int a,b;
  cin >> a >> b;
  if(a>12) cout << b;
  else if(a>5) cout << b/2;
  else cout << 0;

  return 0;
}
