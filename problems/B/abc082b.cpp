#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string s,t;
  cin >> s >> t;
  int ls=s.length(), lt=t.length();

  vector<char> S(ls),T(lt);
  rep(i,ls) S.at(i) = s[i];
  rep(i,lt) T.at(i) = t[i];
  sort(S.begin(), S.end());
  sort(T.begin(), T.end(), greater<char>());

  rep(i,ls) s[i] = S.at(i);
  rep(i,lt) t[i] = T.at(i);

  if(t > s) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
