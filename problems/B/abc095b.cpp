#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,x;
  cin >> n >> x;
  int m[n];
  rep(i,n) cin >> m[i];

  int min=1000;
  rep(i,n){
    if(m[i] < min) min = m[i];
  }

  int count=n;
  rep(i,n) x -= m[i];

  count += x / min;

  cout << count << endl;

  return 0;
}
