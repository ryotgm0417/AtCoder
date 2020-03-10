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
    int q;
    cin >> q;

    vector<char> begin, end;
    int flag = 0;

    rep(i,q){
        int t, f;
        char c;
        cin >> t;
        if(t == 1){
            flag++;
        }else{
            cin >> f >> c;
            if((flag + f)%2 == 1){
                begin.push_back(c);
            }else{
                end.push_back(c);
            }
        }
    }

    int bn = begin.size(), en = end.size();
    if(flag%2 == 0){
        rep(i,bn){
            cout << begin[bn-1-i];
        }
        cout << s;
        rep(i,en){
            cout << end[i];
        }
    }else{
        rep(i,en){
            cout << end[en-1-i];
        }
        int sn = s.size();
        rep(i,sn){
            cout << s[sn-1-i];
        }
        rep(i,bn){
            cout << begin[i];
        }
    }
    cout << endl;

    return 0;
}