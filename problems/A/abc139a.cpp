#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s,t;
  cin >> s >> t;

  int ans=0;
  rep(i,3){
    if(s[i]==t[i]) ans++;
  }

  cout << ans;

  return 0;
}
