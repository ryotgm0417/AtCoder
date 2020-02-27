#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    char b;
    cin >> b;
    switch(b){
        case 'A':
            cout << 'T' << endl;
            break;
        case 'T':
            cout << 'A' << endl;
            break;
        case 'G':
            cout << 'C' << endl;
            break;
        case 'C':
            cout << 'G' << endl;
            break;
        default:
            break;
    }

    return 0;
}