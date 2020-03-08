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
    vector<string> t = {
        "hi",
        "hihi",
        "hihihi",
        "hihihihi",
        "hihihihihi"
    };
    bool flag = false;
    for(auto x:t){
        if(s == x) flag = true;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}