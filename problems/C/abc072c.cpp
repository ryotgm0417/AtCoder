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
    VI c(100010, 0);
    int n;
    cin >> n;
    rep(i,n){
        int a;
        cin >> a;
        c[a]++;
    }

    int max = 0;
    rep2(i,1,100000){
        chmax(max, c[i-1]+c[i]+c[i+1]);
    }

    cout << max << endl;

    return 0;
}