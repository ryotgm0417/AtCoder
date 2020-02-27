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
    cin >> s;
    VI a(4);
    rep(i,4) a[i] = s[i] - '0';

    char op[3];
    rep(b,8){
        int sum = a[0];
        rep(i,3){
            if(b & (1 << i)){
                sum += a[i+1];
                op[i] = '+';
            }else{
                sum -= a[i+1];
                op[i] = '-';
            }
        }
        if(sum==7) break;
    }

    cout<<a[0]<<op[0]<<a[1]<<op[1]<<a[2]<<op[2]<<a[3]<<"=7"<<endl;

    return 0;
}