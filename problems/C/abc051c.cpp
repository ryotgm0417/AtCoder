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
    int sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty;
    int dx = tx - sx, dy = ty - sy;

    // 1st
    rep(i,dy) cout << 'U';
    rep(i,dx) cout << 'R';

    // 2nd
    rep(i,dy) cout << 'D';
    rep(i,dx) cout << 'L';

    // 3rd
    cout << 'L';
    rep(i,dy+1) cout << 'U';
    rep(i,dx+1) cout << 'R';
    cout << 'D';

    // 4th
    cout << 'R';
    rep(i,dy+1) cout << 'D';
    rep(i,dx+1) cout << 'L';
    cout << 'U';

    cout << endl;

    return 0;
}