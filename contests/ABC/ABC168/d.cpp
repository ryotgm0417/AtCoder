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
    ll n,m; cin >> n >> m;
    VVL G(n+1);

    rep(i,m){
        ll a,b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<ll> q;
    VL roadsign(n+1, -1);
    q.push(1); roadsign[1] = 0;

    while(!q.empty()){
        ll v = q.front();
        q.pop();

        for(auto w : G[v]){
            if(roadsign[w] != -1) continue;
            roadsign[w] = v;
            q.push(w);
        }
    }

    cout << "Yes" << endl;
    rep2(i,2,n+1){
        cout << roadsign[i] << endl; 
    }

    return 0;
}