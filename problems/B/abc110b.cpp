#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,m,X,Y;
  cin >> n >> m >> X >> Y;
  int x[n],y[m];
  rep(i,n) cin >> x[i];
  rep(i,m) cin >> y[i];

  bool flag=false;

  int z = X+1;
  while(z<=Y && !flag){
    bool tmp=true;
    rep(i,n){
      if(x[i] >= z){
        tmp = false;
        break;
      }
    }
    rep(i,m){
      if(y[i] < z){
        tmp = false;
        break;
      }
    }
    flag = tmp;
    z++;
  }

  if(flag) cout << "No War" << endl;
  else cout << "War" << endl;

  return 0;
}
