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
    vector<P> y(m);
    VI p(m);

    rep(i,m){
        int pi,yi;
        cin >> pi >> yi;
        p[i] = pi;
        y[i].first = yi;
        y[i].second = i;
    }

    sort(y.begin(), y.end());

    vector<ll> ans(m);
    VI city(n);
    rep(i,n) city[i] = 0;
    rep(j,m){
        int i = y[j].second;
        city[p[i]]++;
        ans[i] = 1000000 * (ll)p[i] + city[p[i]];
    }

    rep(i,m){
        int d = (int)log10(ans[i]) + 1;
        rep(i,12-d) cout << 0;
        cout << ans[i] << endl;
    }

    return 0;
}