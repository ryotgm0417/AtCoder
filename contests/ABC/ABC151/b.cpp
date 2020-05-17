#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

int main(){
  int n,k,m;
  cin >> n >> k >> m;
  int a[n-1];
  rep(i,n-1) cin >> a[i];

  int sum=0;
  rep(i,n-1){
    sum += a[i];
  }

  int an = m*n - sum;
  if(an < 0) an = 0;

  if(an > k) cout << -1 << endl;
  else cout << an << endl;


  return 0;
}
