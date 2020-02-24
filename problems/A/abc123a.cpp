#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int a,b,c,d,e,k;
  cin >> a >> b >> c >> d >> e >> k;
  if(e-a > k) cout << ":(" << endl;
  else cout << "Yay!" << endl;
  return 0;
}