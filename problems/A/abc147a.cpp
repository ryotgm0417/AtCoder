#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a+b+c > 21) cout << "bust" << endl;
  else cout << "win" << endl;
  return 0;
}
