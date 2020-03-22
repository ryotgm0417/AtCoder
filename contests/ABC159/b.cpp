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

int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool flag = true;
    int n1 = (n-1)/2, n2 = (n+1)/2;
    rep(i, n1){
        if(s[i] != s[n1-1-i]) flag = false;
        if(s[n2+i] != s[n-1-i]) flag = false;
    }
    rep(i,n){
        if(s[i] != s[n-1-i]) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}