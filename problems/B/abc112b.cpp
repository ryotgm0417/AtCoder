#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,T;
  cin >> n >> T;
  int c,t,min_c=10000;

  rep(i,n){
    cin >> c >> t;
    if(t<=T){
      if(c < min_c){
        min_c = c;
      }
    }
  }

  if(min_c==10000){
    cout << "TLE" << endl;
  }else{
    cout << min_c << endl;
  }

  return 0;

}
