#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int a,b;
  cin >> a >> b;
  if( (a+b)%2 == 0 ) cout << ((a+b)/2);
  else cout << "IMPOSSIBLE";
  return 0;
}
