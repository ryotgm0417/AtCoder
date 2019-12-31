#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,x,tmp;
  cin >> n >> x;
  int d[n+1];
  d[0]=0;
  rep(i,n){
    cin >> tmp;
    d[i+1] = d[i] + tmp;
  }

  cout << (upper_bound(d,d+(n+1),x) - d) << endl;

  return 0;
}
