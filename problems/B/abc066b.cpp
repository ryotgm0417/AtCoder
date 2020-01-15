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

  int len;
  rep2(i,1,s.length()){
    string t = s.substr(0,s.length()-i);
    len = t.length();

    if(len%2 == 1) continue;
    if(t.substr(0,len/2) == t.substr(len/2, len/2)) break;
  }

  cout << len << endl;

  return 0;
}
