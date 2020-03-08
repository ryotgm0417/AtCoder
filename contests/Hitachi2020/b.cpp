#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

using VVP = vector<vector<P>>;

template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}

int main(){
    int A,B,M;
    cin >> A >> B >> M;
    VI a(A), b(B);
    rep(i,A) cin >> a[i];
    rep(i,B) cin >> b[i];
    
    VVP coupon(A);
    rep(i,M){
        int x,y,c;
        cin >> x >> y >> c;
        P pair;
        pair.first = y-1; pair.second = c;
        coupon[x-1].push_back(pair);
    }

    int bmin_id = (int)(min_element(b.begin(), b.end()) - b.begin());
    int bmin = b[bmin_id];

    int ans = 1000000;
    rep(i,A){
        chmin(ans, a[i] + bmin);
        for(auto x : coupon[i]){
            int y = x.first;
            int c = x.second;
            chmin(ans, a[i]+b[y]-c);
        }
    }

    cout << ans << endl;

    return 0;
}