#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,m,x;
  cin >> n >> m >> x;
  int a[m];
  rep(i,m) cin >> a[i];

  int left = upper_bound(a,a+m,x) - a;
  int right = m - left;

  if(left<right) cout << left << endl;
  else cout << right << endl;

  return 0;
}
