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

    sort(a.begin(), a.end());
    bool flag = true;
    rep(i,n-1){
        if(a[i] == a[i+1]) flag = false;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl; 

	return 0;
}