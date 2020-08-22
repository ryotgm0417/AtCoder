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

// 方針：破壊対象が一番多い行と列を選ぶ。
// ただし、爆破対象が存在するマスに爆弾を置く場合は、答えを-1する。
// 選べる行・列が複数ある場合は、できれば爆破対象が存在しないマスに爆弾を置きたいのだが、これを判別する方法が少しややこしい（計算量削減のために二分探索を使った）

int main(){
    ll h,w,m; cin >> h >> w >> m;
    VL th(h,0), tw(w,0);
    VL sh(m), sw(m);

    rep(i,m){
        cin >> sh[i] >> sw[i];
        sh[i]--; sw[i]--;
        th[sh[i]]++; tw[sw[i]]++;
    }

    ll hmax=0, wmax=0;
    VL Hs, Ws;
    rep(i,h){
        if(th[i] > hmax){
            hmax = th[i];
            Hs = {i};
        }else if(th[i] == hmax){
            Hs.push_back(i);
        }else{
            continue;
        }
    }
    rep(i,w){
        if(tw[i] > wmax){
            wmax = tw[i];
            Ws = {i};
        }else if(tw[i] == wmax){
            Ws.push_back(i);
        }else{
            continue;
        }
    }

    ll ans = hmax + wmax;
    ll poss = (ll)Hs.size() * (ll)Ws.size();
    sort(Hs.begin(), Hs.end());
    sort(Ws.begin(), Ws.end());

    rep(i,m){
        if(binary_search(Hs.begin(), Hs.end(), sh[i])){
            if(binary_search(Ws.begin(), Ws.end(), sw[i])){
                poss--;
            }
        }
    }

    if(poss <= 0) ans--;
    
    cout << ans << endl;

    return 0;
}