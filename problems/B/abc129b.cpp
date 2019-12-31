#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int w[n];
  rep(i,n) cin >> w[i];

  int diff = 100000;
  rep(t,n){
    int s1=0,s2=0;
    rep(i,n){
      if(i <= t) s1 += w[i];
      else s2 += w[i];
    }
    if( abs(s1-s2) < diff ) diff = abs(s1-s2);
  }
  cout << diff << endl;
  return 0;
}
