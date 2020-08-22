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

// Yes-Noを出力する問題で楽をする
void Ans(bool f){
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

//---------------------------

// 方針：幅優先探索

int main(){
    ll h,w; cin >> h >> w;
    ll ch, cw, dh, dw;
    cin >> ch >> cw >> dh >> dw;
    ch--; cw--; dh--; dw--;

    VVL maze(h, VL(w,1000000));
    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            if(s[j]=='#') maze[i][j] = -1; 
        }
    }

    // rep(i,h){
    //     rep(j,w){
    //         cout << maze[i][j];
    //     }
    //     cout << endl;
    // }

    queue<P> q;
    q.push(P(ch,cw));
    maze[ch][cw] = 0;
    
    while(!q.empty()){
        P p = q.front();
        q.pop();
        ll warps = maze[p.first][p.second];

        rep2(xh,-2,3){
            rep2(xw,-2,3){
                ll curh = p.first + xh;
                ll curw = p.second + xw;
                if(curh < 0 || curh >= h) continue;
                if(curw < 0 || curw >= w) continue;

                ll cur_warps = warps;
                ll status = maze[curh][curw];
                if(abs(xh)>1 || abs(xw)>1){
                    cur_warps++;
                }else if(abs(xh)==1 && abs(xw)==1){
                    cur_warps++;
                }

                if(status == -1){
                    continue;
                }else if(status > cur_warps){
                    maze[curh][curw] = cur_warps;
                    q.push(P(curh, curw));
                }else{
                    continue;
                }
            }
        }
    }

    // rep(i,h){
    //     rep(j,w){
    //         cout << maze[i][j];
    //     }
    //     cout << endl;
    // }

    ll result = maze[dh][dw];
    if(result == 1000000){
        cout << -1 << endl;
    }else{
        cout << result << endl;
    }

    return 0;
}