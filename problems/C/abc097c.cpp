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
    int k;
    cin >> s >> k;
    int n = s.size();

    VI v;
    set<int> h;
    set<string> out;

    while(out.size() < k){
        rep(i,n){
            if(h.count(i)) continue;
            if(v.empty()){
                v = {i};
            }else if(s[i] < s[v[0]]){
                v = {i};
            }else if(s[i] == s[v[0]]){
                v.push_back(i);
            }
        }

        for(auto x : v){
            rep2(i,1,6){
                string X = s.substr(x,i);
                out.insert(X);
            }
        }

        for(auto x : v){
            h.insert(x);
        }
        v = {};
    }

    int cnt=0;
    for(auto val : out){
        cnt++;
        if(cnt == k){
            cout << val << endl;
            break;
        }
    }

	return 0;
}