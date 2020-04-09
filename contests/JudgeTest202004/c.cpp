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
    ll a,b,c; cin >> a >> b >> c;
    ll ans = 0, n = a+b+c;
    
    VL p;
    rep(i,n) p.push_back(i+1);
    do {
        VVL bricks(3);
        rep(i,a) bricks[0].push_back(p[i]);
        rep(i,b) bricks[1].push_back(p[a+i]);
        rep(i,c) bricks[2].push_back(p[a+b+i]);

        bool flag = true;
        rep(j,a-1) if(bricks[0][j+1] < bricks[0][j]) flag = false;
        rep(j,b-1) if(bricks[1][j+1] < bricks[1][j]) flag = false;
        rep(j,c-1) if(bricks[2][j+1] < bricks[2][j]) flag = false;
        rep(j,b) if(bricks[0][j] > bricks[1][j]) flag = false;
        rep(j,c) if(bricks[1][j] > bricks[2][j]) flag = false;

        if(flag) ans++;
        
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
    return 0;
}