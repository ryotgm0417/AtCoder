#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int a,b,c,k;
  cin >> a >> b >> c >> k;

  rep(i,k){
    if(a>=b && a>=c) a = 2*a;
    else if(b >= c) b = 2*b;
    else c = 2*c;
  }

  cout << (a+b+c) << endl;

  return 0;
}
