#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;

// ユークリッドの互除法
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int f(int x){
  int count=0;
  while(x%2 == 0){
    x = x/2;
    count++;
  }
  return count;
}


int main(){
  int n,m;
  cin >> n >> m;
  int a[n];
  rep(i,n){
    cin >> a[i];
    a[i] = a[i] / 2;
  }

  int ans=-1;
  ll l=1;
  int factor2=f(a[0]);
  rep(i,n){
    if( f(a[i]) != factor2 ){
      ans = 0;
      break;
    }else{
      l = lcm( l, a[i] );
    }
  }

  if(ans != 0){
    ans = (m/l + 1)/2 ;
  }

  cout << ans << endl;

  return 0;
}
