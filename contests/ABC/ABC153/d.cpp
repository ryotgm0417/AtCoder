#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll h;
  cin >> h;

  ll log2h=0;
  while(pow(2,log2h) <= h){
    log2h++;
  }
  log2h--;

  ll ans=1;
  rep(i,log2h){
    ans = 2*ans + 1;
  }

  cout << ans << endl;


  return 0;
}
