#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	VVI c(3, VI(3));
    rep(i,3)rep(j,3) cin >> c[i][j];

    bool flag = true;
    VI a(3), b(3);
    a[0] = 0;
    b[0] = c[0][0];
    a[1] = c[1][0] - b[0];
    a[2] = c[2][0] - b[0];
    b[1] = c[0][1];
    b[2] = c[0][2];

    rep(i,3)rep(j,3){
        if(c[i][j] != a[i] + b[j]) flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

	return 0;
}