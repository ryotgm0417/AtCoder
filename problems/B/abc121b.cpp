#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,m,c;
  cin >> n >> m >> c;
  int b[m],num=0;
  rep(i,m) cin >> b[i];
  rep(i,n){
    int tmp=c;
    rep(j,m){
      int aij;
      cin >> aij;
      tmp += aij*b[j];
    }
    if(tmp > 0) num++;
  }

  cout << num << endl;

  return 0;
}
