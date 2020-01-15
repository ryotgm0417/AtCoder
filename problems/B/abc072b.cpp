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
  int len=s.size();

  string out((len+1)/2, '-');
  rep(i,(len+1)/2) out[i] = s[2*i];

  cout << out << endl;

  return 0;
}
