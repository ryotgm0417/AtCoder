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

  bool flag=false;
  rep(k,b){
    if( c%b == (k*a)%b ) flag = true;
  }

  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
