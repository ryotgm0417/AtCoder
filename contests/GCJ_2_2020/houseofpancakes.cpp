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

ll mysqrt(ll x){
    ll left = 0, right = (ll)1 << 32;
    while(true){
        if(right <= left + 1) return left;

        ll sqt = left + (right - left)/2;
        ll sq = sqt*sqt;

        if(sq == x){
            return sqt;
        }else if(sq > x){
            right = sqt;
        }else{
            left = sqt;
        }
    }
}

int main(){
    ll t; cin >> t;
    rep(cases, t){
        ll l,r; cin >> l >> r;
        ll n;
        if(l >= r){
            ll diff = l - r;
            ll cons = max(ll(0), mysqrt(2*diff) - 5);
            while(cons*cons + cons <= 2*diff) cons++;

            l -= cons*(cons + 1)/2;

            ll p = max(ll(0), mysqrt(r + cons*cons/4) - (cons+1)/2);
            ll q = max(ll(0), mysqrt(l + (cons+1)*(cons+1)/4) - cons/2 - 1);
            while(p*(cons+p) <= r) p++;
            while(q*(cons+q+1) <= l) q++;

            // p--; q--;

            if(p <= q){
                ll sum_r = (p-1)*(cons + p - 1);
                ll sum_l = (p-1)*(cons + p);
                l -= sum_l; r -= sum_r;
                n = cons + 2*p - 2;
            }else{
                ll sum_r = q*(cons + q);
                ll sum_l = (q - 1)*(cons + q);
                l -= sum_l; r -= sum_r;
                n = cons + 2*q - 1;
            }
        }else{
            ll diff = r - l;
            ll cons = max(ll(0), mysqrt(2*diff) - 5);
            while(cons*cons + cons < 2*diff) cons++;

            r -= cons*(cons + 1)/2;

            ll p = max(ll(0), mysqrt(l + cons*cons/4) - (cons+1)/2);
            ll q = max(ll(0), mysqrt(r + (cons+1)*(cons+1)/4) - cons/2 - 1);
            while(p*(cons+p) <= l) p++;
            while(q*(cons+q+1) <= r) q++;

            // p--; q--;

            if(p <= q){
                ll sum_l = (p-1)*(cons + p - 1);
                ll sum_r = (p-1)*(cons + p);
                l -= sum_l; r -= sum_r;
                n = cons + 2*p - 2;
            }else{
                ll sum_l = q*(cons + q);
                ll sum_r = (q - 1)*(cons + q);
                l -= sum_l; r -= sum_r;
                n = cons + 2*q - 1;
            }
        }
        cout << "Case #" << cases+1 << ": ";
        cout << n << " " << l << " " << r << endl;
    }

    return 0;
}