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
    VI x(n), sorted(n);
    rep(i,n){
        cin >> x[i];
        sorted[i] = x[i];
    }

    sort(sorted.begin(), sorted.end());
    int med = sorted[n/2 - 1];
    int Med = sorted[n/2];
    
    rep(i,n){
        if(x[i] <= med) cout << Med << endl;
        else cout << med << endl;
    }

	return 0;
}