#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    cout << (n/(a+b))*a + min(n%(a+b), a) << endl;
    return 0;
}