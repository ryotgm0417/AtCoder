#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using P = pair<ll, ll>;

// chmin, chmax関数
template<typename T, typename U, typename Comp=less<>>
bool chmax(T& xmax, const U& x, Comp comp={}) {
    if(comp(xmax, x)) {
        xmax = x;
        return true;
    }
    return false;
}
template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}

// Yes-Noを出力する問題で楽をする
void Ans(bool f){
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }
//---------------------------

int main(){
    ll n,q; cin >> n >> q;
    VL a(n), s(q);
    rep(i,n) cin >> a[i];
    rep(i,q) cin >> s[i];

    VL divis(n);
    divis[0] = a[0];
    rep2(i,1,n) divis[i] = gcd(divis[i-1], a[i]);

    rep(i,q){
        ll x = s[i];
        if(gcd(x,divis[n-1]) > 1){
            cout << gcd(x,divis[n-1]) << endl;
        }else{
            ll left = -1, right = n-1;
            while(right - left > 1){
                ll mid = (left + right) / 2;
                if(gcd(divis[mid], x)==1){
                    right = mid;
                }else{
                    left = mid;
                }
            }
            cout << right + 1 << endl;
        }
    }
    return 0;
}