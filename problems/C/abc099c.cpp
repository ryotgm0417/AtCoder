#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int dp[100010];

int main(){
	int n;
    cin >> n;

    int pow6=1,pow9=1;
    dp[0] = 0;

    rep2(i,1,100010){
        if(i == 6*pow6) pow6 *= 6;
        if(i == 9*pow9) pow9 *= 9;
        int A = dp[i-1] + 1;
        int B = dp[i-pow6] + 1;
        int C = dp[i-pow9] + 1;
        dp[i] = min(min(A,B),C);
    }

    cout << dp[n] << endl;

	return 0;
}