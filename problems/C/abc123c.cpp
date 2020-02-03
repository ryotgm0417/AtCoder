#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll n,a[5];
  cin >> n ;
  rep(i,5) cin >> a[i];

  ll m=1000000000000010;
  rep(i,5){
    m = min(a[i], m);
  }

  cout << ((n+m-1)/m + 4) << endl;

  return 0;
}
