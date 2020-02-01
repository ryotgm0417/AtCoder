#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

ll NUM = 1000000007;

int main(){
  int n,m;
  cin >> n >> m;
  VI a(m+1);
  rep(i,m) cin >> a[i];
  a[m] = n+1;

  rep(i,m-1){
    if(a[i+1]-a[i] == 1){
      cout << 0;
      return 0;
    }
  }

  vector<ll> fib(100010);
  fib[0] = 1;
  fib[1] = 1;
  rep2(i,2,100010){
    fib[i] = fib[i-1] + fib[i-2];
    if(fib[i] > NUM) fib[i] = fib[i] % NUM;
  }

  ll ans=1;
  int cur=0;
  rep(i,m+1){
    int diff = a[i] - cur - 1;
    ans *= fib[diff];
    if(ans > NUM) ans = ans % NUM;
    cur = a[i] + 1;
  }

  cout << ans;

  return 0;
}
