#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int v[n],c[n];
  int sum = 0;
  rep(i,n) cin >> v[i];
  rep(i,n){
    cin >> c[i];
    if(v[i]-c[i]>0) sum += v[i] - c[i];
  }
  cout << sum << endl;

  return 0;
}
