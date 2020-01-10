#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,d,x;
  cin >> n >> d >> x;
  int ai;
  rep(i,n){
    cin >> ai;
    x += (d-1)/ai + 1;
  }

  cout << x << endl;

  return 0;
}
