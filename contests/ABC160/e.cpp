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
    ll x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    VL p(a), q(b), r(c);
    rep(i,a) cin >> p[i];
    rep(i,b) cin >> q[i];
    rep(i,c) cin >> r[i];

    VL eat;
    sort(p.begin(), p.end(), greater<ll>());
    sort(q.begin(), q.end(), greater<ll>());
    sort(r.begin(), r.end(), greater<ll>());

    rep(i,x) eat.push_back(p[i]);
    rep(i,y) eat.push_back(q[i]);
    sort(eat.begin(), eat.end(), greater<ll>());

    ll ei = 0, ri = 0, ans = 0;
    rep(i,x+y){
        if(r[ri] > eat[ei]){
            ans += r[ri];
            ri++;
        }else{
            ans += eat[ei];
            ei++;
        }
    }

    cout << ans << endl;

    return 0;
}