#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
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

int main(){
    ll n,k;
    cin >> n >> k;
    vector<P> arr;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        P p(a,b);
        arr.push_back(p);
    }

    sort(arr.begin(), arr.end());
    for(auto p : arr){
        ll a = p.first, b = p.second;
        k -= b;
        if(k <= 0){
            cout << a << endl;
            break;
        }
    }

    return 0;
}