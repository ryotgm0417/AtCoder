#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n, k;
    cin >> n >> k;
    int powk = 1, out = 0;
    while(n >= powk){
        powk *= k;
        out++;
    }

    cout << out << endl;

    return 0;
}