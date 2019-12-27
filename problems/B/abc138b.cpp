#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

typedef long double ld;

int main(){
  int n;
  cin >> n;
  int a[n];
  rep(i,n) cin >> a[i];

  ld ans = 0;
  rep(i,n) ans += 1/(ld)a[i];
  ans = 1/ans;

  cout << setprecision(12) << ans << endl;

  return 0;
}
