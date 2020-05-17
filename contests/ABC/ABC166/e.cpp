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

//---------------------------

int main(){
    ll n; cin >> n;
    vector<P> A(n);
    rep(i,n){
        ll a; cin >> a;
        A[i].first = a;
        A[i].second = i+1;
    }

    VL B(n);
    rep(i,n){
        B[i] = A[i].second - A[i].first;
    }
    sort(B.begin(), B.end());

    ll ans = 0;
    rep(i,n){
        ll val = A[i].first + A[i].second;
        ans += (ll)(upper_bound(B.begin(), B.end(), val) - lower_bound(B.begin(), B.end(), val));
    }

    cout << ans << endl;
    return 0;
}