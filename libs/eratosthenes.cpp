#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using P = pair<ll, ll>;

// エラトステネスのふるい
// min_prime[x] = x の最小の素因数
// x が素数なら 1、x = 0,1 なら 0
const int N = 100000;
vector<int> min_prime(N, 1);

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

    rep2(i,1,100){
        if(min_prime[i] == 1) cout << i << endl;
    }

    return 0;
}