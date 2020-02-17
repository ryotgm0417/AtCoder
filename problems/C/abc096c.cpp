#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int v[4] = {1,0,-1,0};
int u[4] = {0,1,0,-1};

int main(){
	int h,w;
    cin >> h >> w;
    string s[h];
    rep(i,h) cin >> s[i];

    bool ans = true;

    rep(i,h)rep(j,w){
        if(s[i][j] == '#'){
            bool flag = false;
            rep(k,4){
                int ik = i + v[k];
                int jk = j + u[k];
                if(0 <= ik && ik < h && 0 <= jk && jk < w){
                    if(s[ik][jk] == '#') flag = true;
                }
            }
            if(!flag) ans = false;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

	return 0;
}