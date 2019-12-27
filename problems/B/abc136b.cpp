#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;
  int num = 0;

  if(N >= 10){
    num += 9;
    if(N >= 100){
      if(N >= 1000){
        num += 900;
        if(N >= 10000){
          if(N >= 100000){
          	num += 90000;
          }else{
            num += (N-9999);
          }
        }
      }else{
        num += (N-99);
      }
    }
  }else{
    num += N;
  }

  cout << num << endl;

  return 0;
}
