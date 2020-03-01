#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    VVI Fr(n+1);
    VI Ca(n+1, -1), Fn(n+1, 0);
    vector<P> Bl(k);

    rep(i,m){
        int a,b;
        cin >> a >> b;
        Fr[a].push_back(b);
        Fr[b].push_back(a);
        Fn[a]++; Fn[b]++;
    }
    rep(i,k){
        int c,d;
        cin >> c >> d;
        Bl[i].first = c;
        Bl[i].second = d;
    }

    vector<set<int>> groups;
    VI done(n+1, 0);

    rep(i,n){
        int p = i+1;
        if(done[p] == 1) continue;

        int cand = 0;
        set<int> seen;
        VI todo = {};
        seen.insert(p);
        for(auto x : Fr[p]){
            seen.insert(x);
            todo.push_back(x);
            done[x] = 1;
        }
        while(!todo.empty()){
            int v = todo.back();
            todo.pop_back();
            for(auto x : Fr[v]){
                if(seen.count(x)) continue;
                seen.insert(x);
                todo.push_back(x);
                done[x] = 1;
            }
        }
        groups.push_back(seen);
    }

    VI gid(n+1, 0);
    int id = 0;
    for(auto s : groups){
        id++;
        int S = s.size();
        for(auto x : s){
            Ca[x] = S;
            gid[x] = id;
        }
    }

    for(auto q : Bl){
        int q1 = q.first, q2 = q.second;
        if(gid[q1] == gid[q2]){
            Ca[q1]--;
            Ca[q2]--;
        }
    }

    rep(i,n){
        int p = i+1;
        cout << (Ca[p] - Fn[p] - 1) << " ";
    }

    cout << endl;
    return 0;
}