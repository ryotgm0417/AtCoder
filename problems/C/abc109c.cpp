#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

// ユークリッドの互除法
int gcd(int a, int b) { return b?gcd(b,a%b):a; }
int lcm(int a, int b) { return a/gcd(a,b)*b; }

int main(){
	int n,X;
    cin >> n >> X;
    VI x(n);
    rep(i,n){
        int z;
        cin >> z;
        x[i] = abs(z - X);
    }

    int ans = x[0];
    rep(i,n-1){
        ans = gcd(ans, x[i+1]);
    }

    cout << ans << endl;

	return 0;
}