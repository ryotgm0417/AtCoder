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
    rep(x,t){
        ll n; cin >> n;
        VVL a(n,VL(n,0));
        rep(i,n)rep(j,n) cin >> a[i][j];

        ll k=0,r=0,c=0;
        rep(i,n) k += a[i][i];

        rep(i,n){
            VL rows(n);
            rep(j,n) rows[j] = a[i][j];
            sort(rows.begin(), rows.end());
            rep(j,n-1){
                if(rows[j] == rows[j+1]){
                    r++;
                    break;
                }
            }
        }

        rep(i,n){
            VL columns(n);
            rep(j,n) columns[j] = a[j][i];
            sort(columns.begin(), columns.end());
            rep(j,n-1){
                if(columns[j] == columns[j+1]){
                    c++;
                    break;
                }
            }
        }

        cout << "Case #" << x+1 << ": ";
        cout << k << " " << r << " " << c << endl;
    }
    return 0;
}