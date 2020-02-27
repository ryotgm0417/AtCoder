#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

using VL = vector<ll>;

int main(){
    int n;
    cin >> n;
    VL a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    VL B(n);
    rep(i,n){
        VL::iterator low = lower_bound(a.begin(), a.end(), b[i]);
        if(i==0){
            B[i] = (ll)(low - a.begin());
        }else{
            B[i] = B[i-1] + (ll)(low - a.begin());
        }
    }

    ll out = 0;
    rep(i,n){
        VL::iterator low = lower_bound(b.begin(), b.end(), c[i]);
        int id = (int)(low - b.begin() - 1);
        if(id < 0){
            continue;
        }else{
            out += B[id];
        }
    }

    cout << out << endl;

    return 0;
}