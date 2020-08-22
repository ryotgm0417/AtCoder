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
    ll t; cin >> t;
    rep(cases, t){
        ll x,y; string m;
        cin >> x >> y >> m;
        ll n = m.size();
        vector<P> pos(n+1);
        pos[0] = P(x,y);

        ll ans = -1;
        if(x==0 && y == 0) ans = 0;
        rep2(i,1,n+1){
            if(ans != -1) break;
            ll xi = pos[i-1].first, yi = pos[i-1].second;
            if(m[i-1]=='N') yi++;
            else if(m[i-1]=='S') yi--;
            else if(m[i-1]=='E') xi++;
            else if(m[i-1]=='W') xi--;

            pos[i].first = xi;
            pos[i].second = yi;
            if(abs(xi) + abs(yi) <= i) ans = i;
        }

        cout << "Case #" << cases+1 << ": ";
        if(ans == -1) cout << "IMPOSSIBLE" << endl;
        else cout << ans << endl;
    }
    return 0;
}