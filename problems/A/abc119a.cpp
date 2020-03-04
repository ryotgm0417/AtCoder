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
    string th = "2019/04/30";
    if(s <= th){
        cout << "Heisei" << endl;
    }else{
        cout << "TBD" << endl;
    }
    return 0;
}