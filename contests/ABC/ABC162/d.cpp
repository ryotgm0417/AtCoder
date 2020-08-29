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
    string s; cin >> s;
    ll r=0,g=0,b=0;

    if(n < 3){
        cout << 0 << endl;
        return 0;
    }

    rep(i,n){
        if(s[i]=='R') r++;
        else if(s[i]=='G') g++;
        else if(s[i]=='B') b++;
        else cout << "Error" << endl;
    }

    ll ans = r*g*b;

    rep(i,n-2){
        rep2(j,i+1,n-1){
            ll k = j + (j - i);
            if(k >= n) break;
            if(s[i]!=s[j] && s[j]!=s[k] && s[k]!=s[i]) ans--;
        }
    }

    cout << ans << endl;

    return 0;
}