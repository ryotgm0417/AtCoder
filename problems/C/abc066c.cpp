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
    VI begin, end;
    rep(i,n){
        int a;
        cin >> a;
        if(i%2==0){
            end.push_back(a);
        }else{
            begin.push_back(a);
        }
    }

    int bn = begin.size(), en = end.size();
    if(n%2==0){
        rep(i,bn) cout << begin[bn-i-1] << " ";
        rep(i,en) cout << end[i] << " ";
    }else{
        rep(i,en) cout << end[en-i-1] << " ";
        rep(i,bn) cout << begin[i] << " ";
    }
    cout << endl;
    return 0;
}