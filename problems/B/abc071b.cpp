#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string s;
  cin >> s;
  int alph[26] = { 0 };

  rep(i,s.length()){
    alph[ (int)(s[i]-'a') ]++;
  }

  int out=0;
  while(alph[out] != 0){
    out++;
    if(out == 26) break;
  }

  if(out == 26) cout << "None" << endl;
  else cout << (char)('a' + out) << endl;

  return 0;
}
