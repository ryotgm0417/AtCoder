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

ll MAX = 100010; 
set<ll> lun{1,2,3,4,5,6,7,8,9};
set<ll> tmp;

void search(int d){
    for(auto x : lun){
        int len = to_string(x).size();
        int tail = to_string(x)[len-1] - '0';
        if(abs(d-tail) <= 1){
            ll out = x*10 + d;
            tmp.insert(out);
        }
    }
}

int main(){
    ll k;
    cin >> k;

    ll num = lun.size();
    while(num <= MAX){
        tmp = {};
        rep(i,10){
            search(i);
        }
        for(auto x : tmp){
            lun.insert(x);
        }
        num = lun.size();
    }

    auto itr = lun.begin();
    // cout << lun.size() << endl;
    rep(i,k-1){
        ++itr;
        // if(i < 120) cout << *itr << " ";
    }
    // cout << endl;
    cout << *itr << endl;

    return 0;
}