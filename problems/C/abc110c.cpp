#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
    string s,t;
    cin >> s >> t;

    map<char,char> m;
    bool flag=true;

    rep(i,s.size()){
        char x = s[i];
        char y = t[i];
        if(m.count(x)){
            if(m[x] != y) flag = false;
        }else{
            m[x] = y;
        }
    }

    map<char,char> inv;
    for(auto p : m){
        auto key = p.first;
        auto val = p.second;
        if(inv.count(val)) flag = false;
        else inv[val] = key;
    }

    if(flag){
        for(auto p : m){
            auto key = p.first;
            auto val = p.second;
            int i = 0;
            while(m.count(val)){
                if(val == key){
                    break;
                }
                if(i > 30){
                    flag = false;
                    break;
                }
                val = m[val];
                i++;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

	return 0;
}