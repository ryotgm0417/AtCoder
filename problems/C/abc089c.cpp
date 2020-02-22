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
    vector<ll> march(5,0);
    rep(i,n){
        cin >> s;
        switch (s[0])
        {
        case 'M':
            march[0]++;
            break;
        case 'A':
            march[1]++;
            break;
        case 'R':
            march[2]++;
            break;
        case 'C':
            march[3]++;
            break;
        case 'H':
            march[4]++;
            break;
        default:
            break;
        }
    }

    // for(auto x : march){
    //     cout << x << endl;
    // }

    ll ans=0;
    rep(a,3)rep2(b,a+1,4)rep2(c,b+1,5){
        ans += march[a]*march[b]*march[c];
    }

    cout << ans << endl;

	return 0;
}