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

using TP = tuple<ll,ll,ll>;

int main(){
    ll t; cin >> t;
    rep(x,t){
        ll n; cin >> n;
        vector<TP> act;
        rep(i,n){
            ll s,e; cin >> s >> e;
            act.push_back(make_tuple(s,e,i));
        }
        sort(act.begin(), act.end());

        int cam = 0, jam = 0;
        string out = "";
        rep(i,n) out += "x";
        rep(i,n){
            ll s = get<0>(act[i]);
            ll e = get<1>(act[i]);
            ll index = get<2>(act[i]);

            if(s >= cam){
                cam = e;
                out[index] = 'C';
            }else if(s >= jam){
                jam = e;
                out[index] = 'J';
            }else{
                out = "IMPOSSIBLE";
                break;
            }
        }

        cout << "Case #" << x+1 << ": ";
        cout << out << endl;

    }
    return 0;
}