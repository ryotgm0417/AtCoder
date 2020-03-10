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
    VI s(n);
    rep(i,n){
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    int sum = 0;
    rep(i,n) sum += s[i];

    if(sum % 10 != 0){
        cout << sum << endl;
    }else{
        rep(i,n){
            if(s[i]%10 != 0){
                cout << (sum - s[i]) << endl;
                break;
            }
            if(i == n-1){
                cout << 0 << endl;
            }
        }
    }

    return 0;
}