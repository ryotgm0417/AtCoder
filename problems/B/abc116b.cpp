#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int s;
  cin >> s;
  int a[1000000];
  bool flag=false;
  a[0] = s;
  rep(i,999999){
    if(a[i]%2==0){
      a[i+1] = a[i]/2;
    }else{
      a[i+1] = 3*a[i] + 1;
    }

    rep(j,i+1){
      if(a[i+1]==a[j]){
        cout << (i+2) << endl;
        flag = true;
        break;
      }
    }
    if(flag) break;
  }
  return 0;
}
