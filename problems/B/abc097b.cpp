#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int x;
  cin >> x;

  int max=1;
  rep(i,x+1){
    rep(b,x/2+1){
      for(int p=2;p<10;p++){
        if(i==pow(b,p) && i > max){
          max = i;
        }
      }
    }
  }

  cout << max << endl;

  return 0;
}
