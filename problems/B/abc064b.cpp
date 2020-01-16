#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n;
  cin >> n;
  int a[n];
  rep(i,n) cin >> a[i];

  int M = *max_element(a,a+n);
  int m = *min_element(a,a+n);

  cout << (M-m) << endl;

  return 0;
}
