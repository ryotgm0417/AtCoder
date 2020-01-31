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
  ll a,b,c,d;
  cin >> a >> b >> c >> d;

  ll LCM = lcm(c,d);
  ll diff=b-a, ans=0;

  ll ac=a%c, ad=a%d, alcm=a%LCM;
  if(ac==0) ac = c;
  if(ad==0) ad = d;
  if(alcm==0) alcm = LCM;
  ans += (ac + diff)/c;
  ans += (ad + diff)/d;
  ans -= (alcm + diff)/LCM;
  ans = diff - ans + 1;

  cout << ans;

  return 0;
}
