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

int main(){
    ll t; cin >> t;
    rep(cases,t){
        ll x,y; cin >> x >> y;
        string s;
        bool flag = true;

        while(flag){
            // 偶奇が同じなら
            if((x-y)%2 == 0){
                s = "IMPOSSIBLE";
                break;
            }else if(x%2){
                // x is odd
                bool west = ((x-y)%4 == 1) || ((x-y)%4 == -3);
                if(west){
                    if(x==1 && y==0){
                        s += "E";
                        x--;
                    }else{
                        s += "W";
                        x = (x+1)/2;
                        y = y/2;
                    }
                }else{
                    if(x==-1 && y == 0){
                        s += "W";
                        x++;
                    }else{
                        s += "E";
                        x = (x-1)/2;
                        y = y/2;
                    }
                }
            }else{
                // y is odd
                bool south = ((y-x)%4 == 1) || ((y-x)%4 == -3);
                if(south){
                    if(x==0 && y==1){
                        s += "N";
                        y--;
                    }else{
                        s += "S";
                        x = x/2;
                        y = (y+1)/2;
                    }
                }else{
                    if(x==0 && y==-1){
                        s += "S";
                        y++;
                    }else{
                        s += "N";
                        x = x/2;
                        y = (y-1)/2;
                    }
                }
            }
            // cout << s.back() << " " << x << " " << y << endl;
            if(x==0 && y==0) flag = false;
        }
        cout << "Case #" << cases+1 << ": " << s << endl;
    }
    return 0;
}