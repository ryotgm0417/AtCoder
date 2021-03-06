#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  ll cnt=0;
  rep(i,n){
    int j = n-i-1;
    ll r = (a[j] + cnt) % b[j];
    if(r==0) continue;
    cnt += b[j] - r;
  }

  cout << cnt;

  return 0;
}
