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
    VI a(n);
    rep(i,n) cin >> a[i];

    int ans=0;
    rep(i,n){
        int num=0;
        while(a[i]%2 == 0){
            a[i] >>= 1;
            num++;
        }
        ans += num;
    }

    cout << ans << endl;

	return 0;
}