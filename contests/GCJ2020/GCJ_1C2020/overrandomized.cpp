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

using TP = tuple<ll, ll, char>;

int main(){
    ll t; cin >> t;
    rep(cases, t){
        ll u; cin >> u;
        map<char, ll> toid;
        vector<TP> v(10, TP(0,0,'_'));
        ll flag = 0;

        rep(i,10000){
            ll q; string r;
            cin >> q >> r;
            ll n = r.size();

            if(flag < 10){
                for(auto x : r){
                    if(!toid.count(x)){
                        toid[x] = flag;
                        get<2>(v[flag]) = x;
                        flag++;
                    }
                }
            }

            if(n == u){
                get<0>(v[toid.at(r[0])]) ++;
                get<1>(v[toid.at(r[1])]) ++;
            }else if(n == u-1){
                get<1>(v[toid.at(r[0])]) ++;
            }
        }

        sort(v.begin(), v.end());
        
        cout << "Case #" << cases+1 << ": ";
        int order[] = {0,9,8,7,6,5,4,3,2,1};
        for(auto i : order){
            cout << get<2>(v[i]);
        }
        cout << endl;
    }
    return 0;
}