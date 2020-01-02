#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  double y = 0;
  rep(i,n){
    double x;
    string u;
    cin >> x >> u;
    if(u=="JPY"){
      y += x;
    }else{
      y += x*380000.0;
    }
  }

  cout << setprecision(20) << y << endl;

  return 0;
}
