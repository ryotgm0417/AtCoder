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
    ll k;
    cin >> s >> k;

    char ans = '1';
    rep(i,min(k, (ll)s.size())){
        if(s[i] != '1'){
            ans = s[i];
            break;
        }
    }

    cout << ans << endl;

	return 0;
}