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
        string s; cin >> s;
        cout << "Case #" << x+1 << ": ";

        ll n = s.size();
        ll depth = 0;
        rep(i,n){
            ll digit = s[i] - '0';
            if(depth == digit){
                cout << digit;
            }else if(depth < digit){
                rep(j,digit-depth){
                    cout << "(";
                }
                cout << digit;
                depth = digit;
            }else{
                rep(j,depth-digit){
                    cout << ")";
                }
                cout << digit;
                depth = digit;
            }
        }
        rep(j,depth){
            cout << ")";
        }
        cout << endl;
    }
    return 0;
}