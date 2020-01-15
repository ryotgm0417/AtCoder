#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int ei[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int ej[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };

int main(){
  int h,w;
  cin >> h >> w;
  string s[h];
  rep(i,h) cin >> s[i];

  rep(i,h)rep(j,w){
    if(s[i][j] == '.'){
      int mine=0;
      rep(k,8){
        int I = i+ei[k];
        int J = j+ej[k];
        if(I < 0 || I >= h || J < 0 || J >= w) continue;
        if(s[I][J]=='#') mine++;
      }
      s[i][j] = '0'+mine;
    }
  }

  rep(i,h) cout << s[i] << endl;

  return 0;
}
