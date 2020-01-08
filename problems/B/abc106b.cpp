#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int count=0;
  rep(i,n+1){
    if(i%2==0) continue;
    int div=0;
    rep(j,i){
      if(i%(j+1)==0) div++;
    }
    if(div==8) count++;
  }

  cout << count << endl;

  return 0;
}
