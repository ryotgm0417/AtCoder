#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

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
    VI a = {2,3,5,1,4};
    int a_min = 1000, a_max = 0;
    rep(i,5){
        chmin(a_min, a[i]);
        chmax(a_max, a[i]);
    }

    cout << "minimum: " << a_min << endl;
    cout << "maximum: " << a_max << endl;

    return 0;
}