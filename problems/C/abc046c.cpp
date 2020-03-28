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
    ll n;
    cin >> n;
    VL t(n), a(n);
    rep(i,n) cin >> t[i] >> a[i];

    ll T = t[0], A = a[0];
    rep(i,n-1){
        int j = i+1;
        ll u1, u2, T1, T2, A1, A2;
        u1 = (T + t[j] - 1)/t[j];
        u2 = (A + a[j] - 1)/a[j];
        T1 = t[j] * u1;
        T2 = t[j] * u2;
        A1 = a[j] * u1;
        A2 = a[j] * u2;
        
        bool f1 = T1 >= T && A1 >= A;
        bool f2 = T2 >= T && A2 >= A;
        if(f1 && f2){
            T = min(T1, T2);
            A = min(A1, A2);
        }else if(f1){
            T = T1; A = A1;
        }else{
            T = T2; A = A2;
        }
    }
    cout << T+A << endl;
    return 0;
}