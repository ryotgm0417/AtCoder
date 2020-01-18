#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n,m;
  cin >> n >> m;
  int a[n],b[n],c[m],d[m];
  rep(i,n) cin >> a[i] >> b[i];
  rep(i,m) cin >> c[i] >> d[i];

  rep(i,n){
    int MIN = 1001001001, cp;
    rep(j,m){
      int md = abs(a[i]-c[j]) + abs(b[i]-d[j]);
      if(md < MIN){
        MIN = md;
        cp = j+1;
      }
    }
    cout << cp << endl;
  }

  return 0;
}
