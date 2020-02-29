#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

bool check(int f, int s, int v, int x){
    if(f==v && s==x) return true;
    if(f==x && s==v) return true;
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;
    VVI G(n+1);
    vector<P> list(m);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        list.push_back(P(a,b));
    }

    int ans = 0;

    for(auto p : list){
        int f = p.first;
        int s = p.second;
        set<int> seen;
        VI todo = {};
        seen.insert(1);
        for(auto x : G[1]){
            if(check(f,s,1,x)) continue;
            seen.insert(x);
            todo.push_back(x);
        }
        while(!todo.empty()){
            int v = todo.back();
            todo.pop_back();
            for(auto x : G[v]){
                if(seen.count(x)) continue;
                if(check(f,s,v,x)) continue;
                seen.insert(x);
                todo.push_back(x);
            }
        }
        if(seen.size() != n){
            ans++;
            // cout << f << " " << s << endl;
        }
    }

    cout << ans << endl;

    return 0;
}