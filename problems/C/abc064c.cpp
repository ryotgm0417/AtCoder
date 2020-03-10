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
    set<int> colors;
    int free = 0;
    rep(i,n){
        int a;
        cin >> a;
        a /= 400;
        if(a >= 8){
            a = 8;
            free++;
        }
        colors.insert(a);
    }

    int m, M;
    if(free > 0){
        m = max(1, (int)colors.size() - 1);
        M = colors.size() + free - 1;
    }else{
        m = colors.size();
        M = colors.size();
    }

    cout << m << " " << M << endl;
    
    return 0;
}