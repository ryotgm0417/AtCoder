#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

template<typename T, typename U, typename Comp=less<>>
bool chmax(T& xmax, const U& x, Comp comp={}) {
    if(comp(xmax, x)) {
        xmax = x;
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    set<ll> S, D;
    ll qmax = 0;
    rep(i,n){
        ll a;
        cin >> a;
        if(!S.count(a)){
            S.insert(a);
        }else if(D.count(a)){
            chmax(qmax, a);
        }else{
            D.insert(a);
            S.erase(a);
        }
    }

    if(D.size() < 2){
        cout << qmax*qmax << endl;
    }else{
        ll x,y;
        x = *rbegin(D);
        D.erase(x);
        y = *rbegin(D);
        chmax(x,qmax); chmax(y,qmax);
        cout << x*y << endl;
    }

    return 0;
}