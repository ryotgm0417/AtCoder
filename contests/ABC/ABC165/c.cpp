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
    ll n,m,q; cin >> n >> m >> q;
    VL a(q), b(q), c(q), d(q);
    rep(i,q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    ll max=0;
    
    ll all = 2 << (m+n-1);
    // 重複組合せの全探索で十分だけど、実装方法わからず
    // bit全探索で実装
    rep(bit,all){
        VL A;
        ll cur = 1;
        rep(i,m+n-1){
            if(bit & (1 << i)){
                cur++;
            }else{
                A.push_back(cur);
            }
        }
        if(A.size() != n) continue;

        ll score = 0;
        rep(i,q){
            if(A.at(b[i]-1) - A.at(a[i]-1) == c[i]) score += d[i];
        }
        chmax(max, score);
    }

    cout << max << endl;

    return 0;
}