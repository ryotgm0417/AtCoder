#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    
    // VI list = {0,1,2,3,4,5,5,4,3,2};
    // int ans = 0;
    // rep(i,n){
    //     int d = s[i] - '0';
    //     ans += list[d];
    // }

    // VI num(n+1, 0);
    // rep(i,n){
    //     int d = s[i] - '0';
    //     if(d > 5){
    //         num[i]++;
    //         num[i+1] = 10 - d;
    //     }else if(d==5){
    //         if(num[i] > 0){
    //             num[i]--;
    //             num[i+1] = 5;
    //         }else{
    //             num[i+1] = 5;
    //         }
    //     }else{
    //         num[i+1] = d;
    //     }
    // }

    // int ans = 0;
    // rep(i,n+1){
    //     ans += num[i];
    // }

    // cout << ans << endl;

    VI d(n+1, 0);
    rep(i,n){
        d[i] = s[n-1-i] - '0';
    }

    int ans = 0;
    rep(i,n+1){
        if(d[i] <= 4){
            ans += d[i];
        }else if(d[i] >= 6){
            ans += 10 - d[i];
            d[i+1] += 1;
        }else{
            if(d[i+1] <= 4){
                ans += d[i];
            }else{
                ans += 10 - d[i];
                d[i+1] += 1;
            }
        }
    }
	
    cout << ans << endl;

	return 0;
}