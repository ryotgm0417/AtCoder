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

// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a より拝借
// modint: mod 計算を int を扱うように扱える構造体
template<int MOD> struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

const int MOD = 1000000007;
using mint = Fp<MOD>;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }

//---------------------------

bool print = false;

int main(){
    ll n; cin >> n;
    
    ll bothzero=0, azero=0, bzero=0;
    map<P,ll> slopes;

    rep(i,n){
        ll a,b; cin >> a >> b;
        if(a==0 && b==0) bothzero++;
        else if(a==0) azero++;
        else if(b==0) bzero++;
        else{
            if(a < 0){
                a *= -1; b *= -1;
            }
            ll div = gcd(a, abs(b));
            a /= div; b /= div;
            
            P p;
            p.first = a; p.second = b;
            
            if(slopes.count(p)){
                slopes[p] += 1;
            }else{
                slopes[p] = 1;
            }
        }
    }

    if(print){
        for(auto x : slopes){
            auto p = x.first; auto val = x.second;
            cout << "(" << p.first << "," << p.second << "), ";
            cout << val << endl;
        }
    }

    mint ans = 1;
    mint two = 2;

    for(auto x : slopes){
        auto p = x.first; auto val = x.second;
        
        P q;
        q.first = (-1)*p.second;
        q.second = p.first;
        if(q.first < 0){
            q.first = q.first*-1;
            q.second = q.second*-1;
        }

        if(slopes.count(q)){
            ans *= (modpow(two,val) + modpow(two,slopes[q]) - 1);
            slopes[p] = 0;
            slopes[q] = 0;
        }else{
            ans *= modpow(two,val);
        }
    }

    ans *= modpow(two,azero) + modpow(two,bzero) - (mint)1;
    ans += (mint)(bothzero - 1);
    cout << ans << endl;
    return 0;
}