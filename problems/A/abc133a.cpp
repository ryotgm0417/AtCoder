#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n,a,b;
  cin >> n >> a >> b;
  if(n*a > b) cout << b;
  else cout << n*a;
  return 0;
}
