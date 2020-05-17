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
    ll n,k; cin >> n >> k;
    VL tele(n);

    rep(i,n){
        ll a; cin >> a;
        tele[i] = a-1;
    }

    bool flag = true;
    VL visit(n,0);
    ll cur = 0, t = 1, period, begin_loop;
    visit[0] = 1;
    while(flag){
        cur = tele[cur];
        t++;
        if(visit[cur] == 0){
            visit[cur] = t;
        }else{
            period = t - visit[cur];
            begin_loop = visit[cur] - 1;
            flag = false;
        }
    }

    if(k > begin_loop){
        k = (k - begin_loop) % period + begin_loop;
    }

    cur = 0;
    rep(i,k){
        cur = tele[cur];
    }

    cout << cur + 1 << endl;

    return 0;
}