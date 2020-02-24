#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
//using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    VVI F(n, VI(10)), P(n, VI(11));
    rep(i,n)rep(j,10){
        cin >> F[i][j];
    }
    rep(i,n)rep(j,11){
        cin >> P[i][j];
    }

    VI profit(1024,0);

    rep2(b,1,1024){
        VI c(n,0);
        rep(a,10){
            if(b & (1 << a)){
                rep(i,n){
                    if(F[i][a]) c[i]++;
                }
            }
        }
        rep(i,n){  
            profit[b] += P[i][c[i]];
        }
    }
    
    cout << *max_element(profit.begin()+1, profit.end()) << endl;

    return 0;
}