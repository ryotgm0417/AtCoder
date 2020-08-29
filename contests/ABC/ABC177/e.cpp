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

// エラトステネスのふるい
// min_prime[x] = x の最小の素因数
// x が素数なら 1、x = 0,1 なら 0
const ll N = 1000010;
vector<ll> min_prime(N, 1);

void sieve(){
    min_prime[0] = 0;
    min_prime[1] = 0;
    for(int i=2; i*i <= N; i++){
        if(min_prime[i] == 1){
            for(int j=2; i*j <= N; j++){
                if(min_prime[i*j] == 1) min_prime[i*j] = i;
            }
        }
    }
}

//---------------------------

int main(){
    sieve();

    ll n; cin >> n;
    VL a(n);
    rep(i,n) cin >> a[i];

    vector<set<ll>> S(n);
    rep(i,n){
        ll cur = a[i];
        bool flag = true;

        if(cur==1) continue;

        while(flag){
            ll x = min_prime[cur];
            if(x == 1){
                S[i].insert(cur);
                flag = false;
            }else{
                S[i].insert(x);
                cur /= x;
            }
        }
    }

    VL prime_factor_count(N,0);
    rep(i,n){
        for(auto x : S[i]){
            prime_factor_count[x]++;
        }
    }

    bool not_coprime = false;
    bool not_pairwise = false;
    rep(i,N){
        if(prime_factor_count[i] == n) not_coprime = true;
        if(prime_factor_count[i] > 1) not_pairwise = true;
    }

    if(not_pairwise){
        if(not_coprime){
            cout << "not coprime" << endl;
        }else{
            cout << "setwise coprime" << endl;
        }
    }else{
        cout << "pairwise coprime" << endl;
    }

    // rep2(i,1,30){
    //     if(min_prime[i] == 1) cout << i << " " << prime_factor_count[i] << endl;
    // }

    return 0;
}