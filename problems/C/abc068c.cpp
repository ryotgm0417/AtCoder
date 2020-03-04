#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n,m;
    cin >> n >> m;
    set<int> from,to;
    rep(i,m){
        int a,b;
        cin >> a >> b;
        if(a == 1) from.insert(b);
        if(b == n) to.insert(a);
    }

    bool flag = false;
    for(auto x : from){
        if(to.count(x)) flag = true;
    }

    if(flag) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;

    return 0;
}