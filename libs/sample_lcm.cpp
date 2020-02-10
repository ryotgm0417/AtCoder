#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;

// ユークリッドの互除法
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }
int gcd(int a, int b) { return b?gcd(b,a%b):a; }
int lcm(int a, int b) { return a/gcd(a,b)*b; }


int main(){
  // 処理
  int a=10, b=15;
  ll c=12, d=16;

  cout << gcd(a,b) << " " << lcm(a,b) << endl;
  cout << gcd(c,d) << " " << lcm(c,d) << endl;

  return 0;
}
