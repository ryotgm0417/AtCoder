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
    vector<bool> seen(n+1, false);
    ll max = 0;

    rep2(i,1,n+1){
        if(seen[i]) continue;

        seen[i] = true;
        q.push(i);
        ll cnt = 1;

        while(!q.empty()){
            ll v = q.front();
            q.pop();

            for(auto w : G[v]){
                if(seen[w]) continue;
                seen[w] = true;
                q.push(w);
                cnt++;
            }
        }

        chmax(max, cnt);
    }

    cout << max << endl;

    return 0;
}