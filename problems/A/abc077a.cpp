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
    string s[2];
    cin >> s[0] >> s[1];
    bool flag = true;
    rep(i,3){
        if(s[0][i] != s[1][2-i]) flag = false;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}