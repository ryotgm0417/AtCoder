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

using PP = pair<string, int>;

int main(){
    int n;
    cin >> n;
    vector<vector<PP>> V(n);
    V[0].push_back(PP("a",0));
    rep(i,n-1){
        for(auto x : V[i]){
            string s = x.first;
            int t = x.second;
            rep(j,t+2){
                char c = 'a' + j;
                V[i+1].push_back(PP(s+c, max(t,j)));
            }
        }
    }

    for(auto x : V[n-1]){
        cout << x.first << endl;
    }    
    return 0;
}