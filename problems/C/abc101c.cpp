#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	int n,k;
    cin >> n >> k;
    VI a(n);
    rep(i,n) cin >> a[i];

    cout << (n+k-3)/(k-1) << endl;

	return 0;
}