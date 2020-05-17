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
    ll n,m,x; cin >> n >> m >> x;
    VL c(n);
    VVL a(n, VL(m,0));
    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }

    ll ans = 10000000;
    ll all = 2 << n;
    
    rep(bit, all){
        ll cost = 0;
        VL know(m,0);
        rep(i,n){
            if(bit & (1 << i)){
                cost += c[i];
                rep(j,m){
                    know[j] += a[i][j];
                }
            }

            bool flag = true;
            rep(j,m){
                if(know[j] < x){
                    flag = false;
                    break;
                }
            }

            if(flag) chmin(ans, cost);
        }
    }

    if(ans == 10000000) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}