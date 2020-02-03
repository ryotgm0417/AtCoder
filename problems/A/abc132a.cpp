#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s;
  cin >> s;

  bool flag=true;
  char f,g;
  int fn=0,gn=0;

  f = s[0];
  rep(i,4){
    if(s[i] != f) g = s[i];
  }

  rep(i,4){
    if(s[i] == f) fn++;
    if(s[i] == g) gn++;
  }

  if(fn==2 && gn==2) cout << "Yes";
  else cout << "No";

  return 0;
}
