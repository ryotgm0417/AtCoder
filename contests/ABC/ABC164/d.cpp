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
    string s; cin >> s;
    ll n = s.size();
    
    VL mods(2019,0);
    ll rem = 0, tens = 1;

    rep(i,n){
        ll d = s[n-1-i] - '0';
        rem = (rem + tens*d) % 2019;
        tens = (tens*10) % 2019;
        mods[rem]++;
    }

    mods[0]++;

    ll ans = 0;
    rep(i, 2019){
        ll m = mods[i];
        ans += m*(m-1)/2;
    }

    cout << ans << endl;

    return 0;
}
