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
    VI s(m), c(m);
    rep(i,m) cin >> s[i] >> c[i];

    VI ans(n,-1);
    bool none = false;

    rep(i,m){
        if(none) break;

        int id = s[i] - 1;
        if(id==0 && c[i]==0 && n>1){
            none = true;
            break;
        }

        if(ans[id] == -1){
            ans[id] = c[i];
        }else if(ans[id] != c[i]){
            none = true;
        }
    }

    if(none) cout << -1 << endl;
    else{
        rep(i,n){
            if(ans[i]==-1){
                if(i==0 && n>1) ans[i] = 1;
                else ans[i] = 0;
            }
        }
        rep(i,n) cout << ans[i];
        cout << endl;
    }

    return 0;
}