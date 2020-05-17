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

    bool flag = true;
    rep(i,n){
        if(a[i]%2 == 0){
            if(a[i]%3!=0 && a[i]%5!=0) flag = false;
        }
    }

    if(flag) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;

	return 0;
}