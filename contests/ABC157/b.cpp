#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int p[8][3] = {
    {0,1,2},
    {3,4,5},
    {6,7,8},
    {0,3,6},
    {1,4,7},
    {2,5,8},
    {0,4,8},
    {2,4,6}
};

int main(){
    VI a(9);
    rep(i,9) cin >> a[i];
    int n;
    cin >> n;
    VI b(n);
    rep(i,n) cin >> b[i];

    rep(i,n){
        rep(j,9){
            if(b[i] == a[j]) a[j] = 0;
        }
    }

    bool bingo = false;
    rep(i,8){
        bool flag = true;
        rep(j,3){
            if(a[p[i][j]] != 0) flag = false;
        }
        if(flag) bingo = true;
    }

    if(bingo) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}