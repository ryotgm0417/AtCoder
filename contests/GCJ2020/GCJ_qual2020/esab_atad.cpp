#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using P = pair<ll, ll>;


int main(){
    ll t,b; cin >> t >> b;
    if(b==10){
        rep(x,t){
            bool flag = true;
            ll out = 1, in;
            string ans;
            while(flag){
                cout << out << endl;
                cout << flush;
                
                cin >> in;
                char c = '0' + in;
                ans += c;
                out++;
                if(ans.size() == b) flag = false;
            }
            cout << ans << endl;
            cout << flush;

            string fb;
            cin >> fb;
            if(fb == "N") break;
        }
    }else{
        rep(x,t){
            // todo
        }
    }

    return 0;
}