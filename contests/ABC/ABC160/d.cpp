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
    int n,x,y;
    cin >> n >> x >> y;
    
    VL D(n-1,0);

    VVL G(n);
    rep(i,n-1){
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }
    G[x-1].push_back(y-1); G[y-1].push_back(x-1);

    rep(i,n){
        VL dist(n,-1);
        queue<ll> q;
        dist[i] = 0;
        q.push(i);

        while(!q.empty()){
            ll v = q.front();
            q.pop();

            for(auto w : G[v]){
                if(dist[w] != -1) continue;
                dist[w] = dist[v] + 1;
                q.push(w);
            }
        }

        rep(v,n){
            if(dist[v] > 0){
                D[dist[v]-1]++;
            }
        }
    }

    rep(k,n-1){
        cout << D[k]/2 << endl;
    }

    return 0;
}