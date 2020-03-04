#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

// ユークリッドの互除法
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(){
    int n;
    cin >> n;
    vector<ll> t(n);
    rep(i,n) cin >> t[i];

    ll L = t[0];
    rep(i,n-1){
        L = lcm(L, t[i+1]);
    }

    cout << L << endl;

    return 0;
}