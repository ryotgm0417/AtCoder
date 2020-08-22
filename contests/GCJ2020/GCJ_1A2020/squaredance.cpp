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

VVL df(100, VL(100,0));

bool elim(int i, int j){
    ll d = df[i][j];
    if(d==0) return false;

    VL cn;
    rep2(u,1,i+1){
        ll v = i - u;
        if(df[v][j]){
            cn.push_back(df[v][j]);
            break;
        }
    }
    rep2(u,1,100-i){
        ll v = i + u;
        if(df[v][j]){
            cn.push_back(df[v][j]);
            break;
        }
    }
    rep2(u,1,j+1){
        ll v = j - u;
        if(df[i][v]){
            cn.push_back(df[i][v]);
            break;
        }
    }
    rep2(u,1,100-j){
        ll v = j + u;
        if(df[i][v]){
            cn.push_back(df[i][v]);
            break;
        }
    }
    
    if(cn.empty()) return false;

    ll sum = 0, num = 0;
    for(auto w : cn){
        sum += w;
        num++;
    }
    
    if(d*num < sum) return true;
    else return false;
}

int main(){
    ll t; cin >> t;
    rep(x,t){
        rep(i,100)rep(j,100) df[i][j] = 0;

        ll r,c; cin >> r >> c;
        if(r > 100 || c > 100) return 0;
        rep(i,r)rep(j,c) cin >> df[i][j];
        
        cout << "Case #" << x+1 << ": ";

        VL score_history;

        while(true){
            ll sum = 0;
            rep(i,r)rep(j,c) sum += df[i][j];
            score_history.push_back(sum);

            vector<P> elim_dancers;

            rep(i,r)rep(j,c){
                if(elim(i,j)) elim_dancers.push_back(P(i,j));
            }

            if(elim_dancers.empty()){
                break;
            }
            for(auto p : elim_dancers){
                ll i = p.first, j = p.second;
                df[i][j] = 0;
            }
        }

        ll score = 0;
        for(auto z : score_history){
            score += z;
        }
        cout << score << endl;
    }
    return 0;
}