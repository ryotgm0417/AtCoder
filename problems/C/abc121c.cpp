#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n,m;
  cin >> n >> m;
  vector<P> p(n);

  rep(i,n){
    cin >> p[i].first >> p[i].second;
  }

  sort(p.begin(),p.end());

  ll ans = 0;
  int num = m;
  rep(i,n){
    if(num > p[i].second){
      num -= p[i].second;
      ans += (ll)p[i].first * (ll)p[i].second;
    }else{
      ans += (ll)p[i].first * (ll)num;
      break;
    }
  }

  cout << ans;

  return 0;
}
