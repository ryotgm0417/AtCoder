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
    rep(x,t){
        ll n; cin >> n;
        
        bool ok = true;
        string s1 = "", s2 = "";
        ll sn1 = 0, sn2 = 0;
        
        rep(i,n){
            string s; cin >> s;
            ll sn = s.size();

            if(!ok) continue;

            rep(i,sn){
                if(s[i]=='*') break;
                if(i >= sn1){
                    s1 += s[i];
                    sn1++;
                }else{
                    if(s[i] != s1[i]){
                        ok = false;
                        break;
                    }
                }
            }

            rep(i,sn){
                ll j = sn - 1 - i;
                if(s[j]=='*') break;
                if(i >= sn2){
                    s2 += s[j];
                    sn2++;
                }else{
                    if(s[j] != s2[i]){
                        ok = false;
                        break;
                    }
                }
            }

            if(sn1 + sn2 > 10000) ok = false;
        }

        // Output
        cout << "Case #" << x+1 << ": ";
        if(ok){
            reverse(s2.begin(), s2.end());
            cout << s1 << s2 << endl;
        }else{
            cout << "*" << endl;
        }
    }
    return 0;
}