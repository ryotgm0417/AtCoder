#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int n,m;
    cin >> n >> m;
    int trial = 1900*m + 100*(n-m);
    cout << pow(2,m)*trial << endl;
    return 0;
}