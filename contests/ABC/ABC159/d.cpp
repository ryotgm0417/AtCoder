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

//---------------------------

ll MAX = 200010;
VL num(MAX, 0);

int main(){
    ll n;
    cin >> n;

    VL A(n,0);
    rep(i,n){
        ll a;
        cin >> a;
        A[i] = a;
        num[a]++;
    }

    ll total = 0;
    rep(i,MAX){
        total += num[i]*(num[i]-1)/2;
    }
    // cout << total << endl;
    
    rep(i,n){
        ll ai = A[i];
        ll old = num[ai]*(num[ai]-1)/2;
        ll neww = (num[ai] - 1)*(num[ai] - 2)/2;
        cout << total - old + neww << endl;
    }

    return 0;
}