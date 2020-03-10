#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    int a,b;
    cin >> a >> b;
    int ans = -1;
    rep2(i,1,1011){
        if(i*8/100==a && i*10/100==b){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}