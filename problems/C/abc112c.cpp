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
    VI x(n),y(n),h(n);
    rep(i,n) cin >> x[i] >> y[i] >> h[i];

    rep(cx,101){
        rep(cy,101){
            int H;
            rep(i,n){
                if(h[i] != 0){
                    H = h[i] + abs(x[i]-cx) + abs(y[i]-cy);
                    break;
                }
            }
            bool flag=true;
            rep(i,n){
                if(h[i] != max(H-abs(x[i]-cx)-abs(y[i]-cy), 0)){
                    flag = false;
                    break;
                }
            }
            if(flag) cout << cx << " " << cy << " " << H << endl;
        }
    }

	return 0;
}