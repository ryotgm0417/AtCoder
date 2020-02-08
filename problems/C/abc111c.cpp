#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	int n;
    cin >> n;
    VI e(n/2), o(n/2);
    rep(i,n){
        if(i%2 == 0) cin >> e[i/2];
        if(i%2 == 1) cin >> o[i/2];
    }

    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    vector<P> el(1, P(0,-1));
    vector<P> ol(1, P(0,-1));

    rep(i,n/2){
        if(el.empty() || el.back().second != e[i]){
            P p;
            p.first = 1;
            p.second = e[i];
            el.push_back(p);
        }else{
            el.back().first++;
        }

        if(ol.empty() || ol.back().second != o[i]){
            P p;
            p.first = 1;
            p.second = o[i];
            ol.push_back(p);
        }else{
            ol.back().first++;
        }
    }

    sort(el.begin(), el.end(), greater<P>());
    sort(ol.begin(), ol.end(), greater<P>());

    int ans=0;
    if(el[0].second != ol[0].second){
        ans = n - (el[0].first + ol[0].first);
    }else{
        int x = el[0].first + ol[1].first;
        int y = el[1].first + ol[0].first;
        ans = n - max(x,y);
    }

    cout << ans << endl;

	return 0;
}