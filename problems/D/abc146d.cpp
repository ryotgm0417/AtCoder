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

VVL G(100010);
VL color(100010, 0);

int main(){
    ll n; cin >> n;
    vector<P> inputs;
    rep(i,n-1){
        ll a,b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        inputs.push_back(P(a,b));
    }

    ll k = 0;
    map<P,ll> rec;
    
    queue<ll> q;
    VL done(n+1,0);
    q.push(1);
    done[1] = 1;

    while(!q.empty()){
        ll v = q.front();
        q.pop();
        chmax(k, G[v].size());
        ll cur = 1;
        for(auto w : G[v]){
            if(done[w]) continue;

            if(cur == color[v]) cur++;
            rec[P(v,w)] = cur;
            rec[P(w,v)] = cur;
            color[w] = cur;
            cur++;

            q.push(w);
            done[w] = 1;
        }
    }

    cout << k << endl;
    for(auto p : inputs){
        cout << rec[p] << endl;
    }

    return 0;
}