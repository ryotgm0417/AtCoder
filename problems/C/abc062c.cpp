#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

template<typename T, typename U, typename Comp=less<>>
bool chmin(T& xmin, const U& x, Comp comp={}) {
    if(comp(x, xmin)) {
        xmin = x;
        return true;
    }
    return false;
}


int main(){
    ll h,w;
    cin >> h >> w;
    if(h%3==0 || w%3==0){
        cout << 0 << endl;
        return 0;
    }

    ll ans = h * w;

    ll A[2] = {h/3, h/3+1};
    ll B[2] = {w/2, w/2+1};
    
    rep(i,2)rep(j,2){
        ll a = A[i], b = B[j];
        ll pcs[3] = {a*w, (h-a)*b, (h-a)*(w-b)};

        // rep(k,3) cout << pcs[i] << " ";
        // cout << endl;

        chmin(ans, *max_element(pcs, pcs+3) - *min_element(pcs, pcs+3));
    }

    ll AA[2] = {w/3, w/3+1};
    ll BB[2] = {h/2, h/2+1};
    rep(i,2)rep(j,2){
        ll a = AA[i], b = BB[j];
        ll pcs[3] = {a*h, (w-a)*b, (w-a)*(h-b)};

        // rep(k,3) cout << pcs[i] << " ";
        // cout << endl;

        chmin(ans, *max_element(pcs, pcs+3) - *min_element(pcs, pcs+3));
    }

    if(w > h) swap(w,h); // always h >= w
    chmin(ans, w);

    cout << ans << endl;

    return 0;
}