#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n, r;
    cin >> n >> r;
    if(n >= 10) cout << r << endl;
    else cout << (r + 100*(10-n)) << endl;
    return 0;
}