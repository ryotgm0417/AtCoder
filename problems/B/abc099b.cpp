#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int a,b;
  cin >> a >> b;

  int n=b-a, x=0;
  rep(i,n) x += i;
  x -= a;
  cout << x << endl;

  return 0;

}
