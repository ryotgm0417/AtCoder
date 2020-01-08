#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int d,n,out;
  cin >> d >> n;

  if(n!=100){
  	out = n * pow(100,d);
  }else{
    out = 101*pow(100,d);
  }

  cout << out << endl;

  return 0;

}
