#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	int n,k;
	cin >> n >> k;
	vector<ll> x(n);
	rep(i,n) cin >> x[i];

	ll ans = 1000000000;
	rep(i,n-k+1){
		ll t;
		ll l = abs(x[i]);
		ll r = abs(x[i+k-1]);
		if(x[i]*x[i+k-1] > 0){
			t = max(l,r);
		}else{
			t = min(2*l+r, l+2*r);
		}
		if(t < ans) ans = t;
	}

	cout << ans << endl;

	return 0;
}