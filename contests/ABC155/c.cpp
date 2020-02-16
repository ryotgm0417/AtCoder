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
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    map<string, int> poll;
    rep(i,n){
        if(poll.count(S[i])){
            poll[S[i]]++;
        }else{
            poll[S[i]] = 1;
        }
    }

    int max = 0;
    vector<string> win;
    for(auto x : poll){
        auto k = x.first;
        auto v = x.second;
        if(v > max){
            max = v;
            win = {k};
        }else if(v == max){
            win.push_back(k);
        }
    }

    sort(win.begin(), win.end());
    for(auto x : win){
        cout << x << endl;
    }

	return 0;
}