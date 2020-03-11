#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<ll>;
using VVI = vector<vector<ll>>;
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

int main(){
    ll n,t, sum=0;
    cin >> n >> t;

    ll bef, aft;
    cin >> aft; // = 0
    rep(i,n-1){
        bef = aft;
        cin >> aft;
        if(aft-bef < t) sum += aft - bef;
        else sum += t;
    }
    sum += t;
    cout << sum << endl;
    return 0;
}