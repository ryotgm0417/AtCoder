#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int a[n];
  rep(i,n) cin >> a[i];

  int max=0;
  rep(i,n){
    rep(j,i){
      if(abs(a[i]-a[j]) > max) max = abs(a[i]-a[j]);
    }
  }

  cout << max << endl;

  return 0;

}
