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
    ll n,k;
    cin >> n >> k;

    bool d[10];
    rep(i,10) d[i] = false;
    rep(i,k){
        int x;
        cin >> x;
        d[x] = true;
    }

    while(true){
        string s = to_string(n);
        int digits = s.size();
        bool allow = true;
        
        rep(i,digits){
            rep(j,10){
                if(s[i]-'0'==j && d[j]){
                    allow = false;
                }
            }
        }

        if(allow) break;
        n++;
    }

    cout << n << endl;
    return 0;
}