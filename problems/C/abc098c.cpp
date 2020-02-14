#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	int n;
    cin >> n;
    string s;
    cin >> s;

    VI w(n), e(n);
    w[0] = 0;
    e[n-1] = 0;
    rep(i,n-1){
        if(s[i]=='W'){
            w[i+1] = w[i] + 1;
        }else{
            w[i+1] = w[i];
        }
        if(s[n-1-i]=='E'){
            e[n-2-i] = e[n-1-i] + 1;
        }else{
            e[n-2-i] = e[n-1-i];
        }
    }

    int ans = n;
    rep(i,n){
        ans = min(ans, w[i]+e[i]);
    }

    cout << ans << endl;

	return 0;
}