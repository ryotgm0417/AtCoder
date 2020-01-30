#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  VI a(n+1),b(n);
  rep(i,n+1) cin >> a[i];
  rep(i,n) cin >> b[i];

  ll sum=0;
  rep(i,n){
    if(b[i] <= a[i]){
      sum += b[i];
      a[i] -= b[i];
    }else{
      sum += a[i];
      b[i] -= a[i];
      a[i] = 0;
      if(b[i] <= a[i+1]){
        sum += b[i];
        a[i+1] -= b[i];
      }else{
        sum += a[i+1];
        b[i] -= a[i+1];
        a[i+1] = 0;
      }
    }
  }

  cout << sum << endl;

  return 0;
}
