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
    VI p(n);
    rep(i,n) cin >> p[i];

    VI E(n-k+1, 0);
    rep(i,k){
        E[0] += p[i] + 1;
    }
    rep(i,n-k){
        E[i+1] = E[i] - p[i] + p[i+k];
    }
    sort(E.begin(), E.end(), greater<int>());

    cout << setprecision(12) << ((double)E[0] / 2.0) << endl;

	return 0;
}