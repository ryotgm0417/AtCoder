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

const int PN = 500;
VVL Pascal(PN, VL(PN, -1));

int main(){
    rep(i,PN){
        Pascal[i][0] = 1;
        Pascal[i][i] = 1;
    }
    rep(i,PN){
        rep2(j,1,i-1){
            Pascal[i][j] = Pascal[i-1][j-1] + Pascal[i-1][j];
        }
    }

    ll t; cin >> t;
    rep(x,t){
        ll n; cin >> n;

        if(n <= 500){
            cout << "Case #" << x+1 << ":" << endl;
            rep(i,n){
                cout << i+1 << " " << 1 << endl;
            }
        }else if(n <= 1000){
            cout << "Case #" << x+1 << ":" << endl;
            if(n == 1000){
                cout << "1 1" << endl;
                cout << "2 1" << endl;
                cout << "3 2" << endl;
                cout << "4 2" << endl;
                cout << "4 1" << endl;
                rep2(i,5,499){
                    cout << i << " " << 1 << endl;
                }
                cout << "499 2" << endl;
            }else if(n == 999){
                cout << "1 1" << endl;
                cout << "2 1" << endl;
                cout << "3 2" << endl;
                cout << "4 2" << endl;
                cout << "4 1" << endl;
                rep2(i,5,499){
                    cout << i << " " << 1 << endl;
                }
                cout << "498 2" << endl;
            }else if(n%2 == 0){
                rep(i,n/2){
                    cout << i+1 << " " << 1 << endl;
                }
                cout << n/2 + 1 << " " << 2 << endl;
            }else{
                rep(i,(n+1)/2){
                    cout << i+1 << " " << 1 << endl;
                }
                cout << (n+1)/2 << " " << 2 << endl;
            }
        }else{
            return 0;
        }
    }
    return 0;
}