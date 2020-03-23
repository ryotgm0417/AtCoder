#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using P = pair<ll, ll>;

// chmin, chmax関数
template<typename T, typename U, typename Comp=less<>>
bool chmax(T& xmax, const U& x, Comp comp={}) {
    if(comp(xmax, x)) {
        xmax = x;
        return true;
    }
    return false;
}
template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}

//---------------------------

const int MAX = 5000;

// s[i]のk文字後にs[j]が重なっても良いか
bool check[3][3][MAX];

bool compare(char u, char v){
    if(u == '?') return true;
    if(v == '?') return true;
    if(u == v) return true;
    else return false;
}

int main(){
    vector<string> s(3);
    rep(i,3) cin >> s[i];

    rep(i,3)rep(j,3)rep(k,MAX) check[i][j][k] = true;

    rep(i,3)rep(j,3){
        rep(k,s[i].size()){
            for(int l = k; l < s[i].size(); l++){
                int m = l - k;
                if(m >= s[j].size()) break;
                if(!compare(s[i][l], s[j][m])){
                    check[i][j][k] = false;
                    break;
                }
            }
        }
    }

    int ans = 10000;
    vector<int> p = {0,1,2};
    do {
        rep(x,2005)rep(y,2005){
            if(!check[p[0]][p[1]][x]) continue;
            if(!check[p[1]][p[2]][y]) continue;
            if(!check[p[0]][p[2]][x+y]) continue;
            
            int val = s[p[0]].size();
            chmax(val, s[p[1]].size() + x);
            chmax(val, s[p[2]].size() + x + y);
            chmin(ans, val);
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << ans << endl;
    return 0;
}