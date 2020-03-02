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
    set<int> S;
    rep(i,n){
        int a;
        cin >> a;
        if(S.count(a)){
            S.erase(a);
        }else{
            S.insert(a);
        }
    }
    cout << S.size() << endl;
    return 0;
}