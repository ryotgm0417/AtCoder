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

bool print = false;

int main(){
    ll n,k; cin >> n >> k;
    VL p(3); cin >> p[0] >> p[1] >> p[2];
    string t; cin >> t;

    VVL mod(k);
    rep(i,n){
        ll m = i%k;
        if(t[i]=='r') mod[m].push_back(2);
        else if(t[i]=='s') mod[m].push_back(0);
        else if(t[i]=='p') mod[m].push_back(1);
    }

    if(print){
        rep(m,k){
            for(auto x: mod[m]){
                cout << x << " ";
            }
            cout << endl;
        }
    }

    ll ans = 0;
    rep(m,k){
        ll bef = -1;
        for(auto x : mod[m]){
            if(x==bef){
                bef = -1;
                continue;
            }
            ans += p[x];
            bef = x;
        }
    }

    cout << ans << endl;
    return 0;
}