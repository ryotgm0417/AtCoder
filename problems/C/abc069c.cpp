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
    int one=0,two=0,four=0;
    rep(i,n){
        int a;
        cin >> a;
        if(a%4 == 0) four++;
        else if(a%2 == 0) two++;
        else one++;
    }
    assert(one+two+four == n);

    bool flag;
    if(two){
        if(one > four) flag = false;
        else flag = true;
    }else{
        if(one - four > 1) flag = false;
        else flag = true;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}