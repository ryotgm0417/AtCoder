#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int Rs = 100000;
VI C(Rs+1, 0);

int main(){
    int n;
    cin >> n;

    int del=0;

    rep(i,n){
        int a;
        cin >> a;
        if(a > Rs){
            del++;
            continue;
        }else{
            C[a]++;
        }
    }

    rep(i,Rs+1){
        if(C[i] >= i){
            del += C[i] - i;
        }else{
            del += C[i];
        }
    }

    cout << del << endl;

    return 0;
}