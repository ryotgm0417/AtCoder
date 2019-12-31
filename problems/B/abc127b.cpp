#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int r,d,x[11];
  cin >> r >> d >> x[0];
  rep(i,10){
    x[i+1] = r*x[i] - d;
    cout << x[i+1] << endl;
  }
  return 0;
}
