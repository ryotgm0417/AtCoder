#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

// ユークリッドの互除法
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];

  ll ans=a[0];
  rep(i,n-1){
    ans = gcd(ans, a[i+1]);
  }

  cout << ans;

  return 0;
}
