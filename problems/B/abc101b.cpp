#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,nc,sn=0,d;
  cin >> n;
  nc = n;

  for(int i=9;i>=0;i--){
    d = nc / pow(10,i);
    nc = nc - d*pow(10,i);
    sn += d;
  }

  if(n%sn==0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;

}
