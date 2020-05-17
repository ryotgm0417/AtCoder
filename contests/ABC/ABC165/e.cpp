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

// Yes-Noを出力する問題で楽をする
void Ans(bool f){
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

//---------------------------

int main(){
    ll n,m; cin >> n >> m;
    if(n%2==0){
        ll a = 1, b = n/2;
        ll c = n/2 + 1, d = n - 1;
        rep(i,m){
            if(i%2==0){
                cout << a << " " << b << endl;
                a++; b--;
            }else{
                cout << c << " " << d << endl;
                c++; d--;
            }
        }
    }else{
        ll left=1, right=n-1;
        rep(i,m){
            cout << left << " " << right << endl;
            left++; right--;
        }
    }
    return 0;
}