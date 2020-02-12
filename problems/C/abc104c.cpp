#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int dp[11][1010][2];

int main(){
	int D,G;
    cin >> D >> G;
    G = G/100;
    VI p(D+1), c(D+1);
    p[0] = 0; c[0] = 0;
    rep2(i,1,D+1){
        int _c;
        cin >> p[i] >> _c;
        c[i] = _c / 100;
    }

    // init
    rep(n,1010){
        dp[0][n][0] = 0;
    }
    rep(d,11){
        dp[d][0][0] = 0;
        dp[d][0][1] = 0;
    }

    rep2(d,1,D+1){
        rep2(n,1,1010){
            int A = dp[d-1][n][0];
            int B=0, C=0;
            if(dp[d][n-1][1] < p[d]){
                B = dp[d][n-1][0] + d;
            }
            if(n >= p[d]){
                C = d*p[d] + c[d] + dp[d-1][n-p[d]][0];
            }

            if(C >=A && C >= B){
                dp[d][n][0] = C;
                dp[d][n][1] = p[d];
            }else if(B >= A){
                dp[d][n][0] = B;
                dp[d][n][1] = dp[d][n-1][1] + 1;
            }else{
                dp[d][n][0] = A;
                dp[d][n][1] = 0;
            }
        }
    }

    // rep(i,11){
    //     rep(j,15){
    //         cout << dp[i][j][0] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << " --- "<< endl;

    // rep(i,11){
    //     rep(j,15){
    //         cout << dp[i][j][1] << " ";
    //     }
    //     cout << endl;
    // }

    int ans;
    rep(n,1010){
        if(dp[D][n][0] >= G){
            ans = n;
            break;
        }
    }

    cout << ans << endl;

	return 0;
}