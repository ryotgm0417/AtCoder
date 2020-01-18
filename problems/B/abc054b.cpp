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
  string a[n],b[m];
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];

  bool ans=false;

  rep(i,n-m+1)rep(j,n-m+1){
    int flag = true;
    rep(k,m){
      if(b[k] != a[k+i].substr(j,m)) flag = false;
    }
    if(flag){
      ans = true;
      break;
    }
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
