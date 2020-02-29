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
    int sn = s.size(), tn = t.size();
    
    if(tn > sn){
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    vector<string> S;
    rep(begin, sn-tn+1){
        bool flag=true;
        rep(i,tn){
            if(s[begin+i] != t[i] && s[begin+i] != '?') flag = false;
        }
        if(flag){
            string sc = s;
            rep(i,sn){
                if(begin <= i && i < begin + tn){
                    sc[i] = t[i-begin];
                }else if(s[i] == '?'){
                    sc[i] = 'a';
                }
            }
            S.push_back(sc);
            // cout << sc << endl;
        }
    }

    if(S.empty()){
        cout << "UNRESTORABLE" << endl;
    }else{
        sort(S.begin(), S.end());
        cout << S.at(0) << endl;
    }

    return 0;
}