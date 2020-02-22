#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    VI x(n);
    rep(i,n) cin >> x[i];

    int min = 10000000;
    rep2(p,1,101){
        int sum = 0;
        rep(i,n){
            sum += (x[i]-p)*(x[i]-p);
        }
        if(sum < min) min = sum;
    }

    cout << min << endl;

    return 0;
}