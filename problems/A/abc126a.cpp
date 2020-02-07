#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n,k;
  string s;
  cin >> n >> k >> s;

  char c = s[k-1];
  if(c=='A') s[k-1] = 'a';
  if(c=='B') s[k-1] = 'b';
  if(c=='C') s[k-1] = 'c';

  cout << s;

  return 0;
}
