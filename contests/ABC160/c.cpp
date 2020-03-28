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

//---------------------------

int main(){
    ll k,n;
    cin >> k >> n;
    VL a(n);
    rep(i,n) cin >> a[i];

    VL diff(n);
    rep(i,n-1){
        diff[i] = a[i+1] - a[i];
    }
    diff[n-1] = k + a[0] - a[n-1];

    sort(diff.begin(), diff.end(), greater<ll>());
    cout << k - diff[0] << endl;

    return 0;
}