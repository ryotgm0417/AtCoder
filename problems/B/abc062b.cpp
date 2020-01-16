#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int h,w;
  cin >> h >> w;
  string s[h];
  rep(i,h) cin >> s[i];

  string frame="";
  rep(i,w+2) frame += '#';

  cout << frame << endl;
  rep(i,h) cout << '#' << s[i] << '#' << endl;
  cout << frame << endl;

  return 0;
}
