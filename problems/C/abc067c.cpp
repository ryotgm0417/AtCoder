#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

ll MAX = 1000000000000000000;

template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> sum(n);
    sum[0] = a[0];
    rep(i,n-1){
        sum[i+1] = sum[i] + a[i+1];
    }
    ll ans = MAX;
    rep(i,n-1){
        ll snuke = sum[i], arai = sum[n-1] - sum[i];
        chmin(ans, abs(snuke - arai));
    }

    cout << ans << endl;
    
    return 0;
}