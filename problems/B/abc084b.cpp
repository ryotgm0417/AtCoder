#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int a,b;
  string s;
  cin >> a >> b >> s;

  bool flag=true;

  if(s.length() != a+b+1) flag = false;

  rep(i,a){
    if(!isdigit(s[i])) flag = false;
  }
  if(s[a]!='-') flag=false;
  rep2(i,a+1,a+b+1){
    if(!isdigit(s[i])) flag = false;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
