#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

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


int main(){
	int n;
    cin >> n;
    vector<P> r(n), b(n);

    int x,y;
    rep(i,n){
        cin >> x >> y;
        r[i].first=y; r[i].second=x;
    }
    rep(i,n){
        cin >> x >> y;
        b[i].first=x; b[i].second=y;
    }
    sort(r.begin(), r.end(), greater<P>());
    sort(b.begin(), b.end());

    int ans=0;
    set<int> used_r;
    rep(i,n){
        int bx = b[i].first, by = b[i].second;
        rep(j,n){
            if(used_r.count(j)) continue;
            int rx = r[j].second, ry = r[j].first;
            if(rx < bx && ry < by){
                ans++;
                used_r.insert(j);
                break;
            }
        }
    }

    cout << ans << endl;


// failed attempt below

    // rep(i,n){
    //     int x,y;
    //     cin >> x >> y;
    //     r[i].first = x;
    //     r[i].second = y;
    // }
    // rep(i,n){
    //     int x,y;
    //     cin >> x >> y;
    //     b[i].first = x;
    //     b[i].second = y;
    // }
    
    // VVI RinB(n, VI(n, 0));
    // rep(i,n)rep(j,n){
    //     int rx,ry,bx,by;
    //     rx = r[i].first;
    //     ry = r[i].second;
    //     bx = b[j].first;
    //     by = b[j].second;
    //     if(rx < bx && ry < by) RinB[i][j] = 1;
    // }

    // int ans = 0;
    // while(1){
    //     int icnt=1000, jcnt=0, rr=-1, bb=-1;
    //     rep(i,n){
    //         int sum = 0;
    //         rep(j,n) sum += RinB[i][j];
    //         if(sum > 0) if(chmin(icnt, sum)) rr = i;
    //     }
    //     if(rr == -1) break;

    //     rep(j,n){
    //         if(RinB[rr][j] == 0) continue;
    //         int sum = 0;
    //         rep(i,n) sum += RinB[i][j];
    //         if(chmax(jcnt, sum)) bb=j;
    //     }

    //     rep(j,n) RinB[rr][j] = 0;
    //     rep(i,n) RinB[i][bb] = 0;
    //     ans++;
    // }
    
    // cout << ans << endl;

	return 0;
}