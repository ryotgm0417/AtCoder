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
    VI c(n-1), s(n-1), f(n-1);
    rep(i,n-1) cin >> c[i] >> s[i] >> f[i];

    VI out;
    rep(i,n-1){
        rep(j,out.size()){
            int next = (out[j]+f[i]-1)/f[i]*f[i];
            out[j] = max(s[i], next);
        }
        out.push_back(s[i]);
        rep(j,out.size()){
            out[j] += c[i];
        }
    }

    for(auto x : out){
        cout << x << endl;
    }
    cout << 0 << endl;
	return 0;
}