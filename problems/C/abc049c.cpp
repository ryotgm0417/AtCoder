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

string func(string s, int c, int l){
    if(c >= 0) return s.substr(c,l);
    else return "N/A";
}

int main(){
    string s, t="";
    cin >> s;
    
    int cnt = s.size() - 1;
    bool flag = true;
    while(s != t && flag){
        if(func(s,cnt-4,5)=="dream"){
            t = "dream" + t;
            cnt -= 5;
        }else if(func(s,cnt-4,5)=="erase"){
            t = "erase" + t;
            cnt -= 5;
        }else if(func(s,cnt-6,7)=="dreamer"){
            t = "dreamer" + t;
            cnt -= 7;
        }else if(func(s,cnt-5,6)=="eraser"){
            t = "eraser" + t;
            cnt -= 6;
        }else{
            flag = false;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}