#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  string s;
  cin >> s;
  bool bad = false;
  rep(i,3){
    if(s[i] == s[i+1]) bad = true;
  }

  if(bad) cout << "Bad";
  else cout << "Good";
  return 0;
}
