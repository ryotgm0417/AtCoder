#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll l,r;
  cin >> l >> r;

  ll start,diff;
  int ans=2019*2019;
  start = l % 2019;
  diff = min((ll)2019, r-l+1);

  rep2(i,start,start+diff){
    rep2(j,start,i){
      ans = min(ans,(i*j)%2019);
    }
  }

  cout << ans << endl;


  return 0;
}
