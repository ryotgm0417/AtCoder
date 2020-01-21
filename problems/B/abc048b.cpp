#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll a,b,x;
  cin >> a >> b >> x;

  ll ans;
  if(a%x == 0){
    ans = (b-a)/x + 1;
  }else{
    ans = b/x - a/x;
  }

  cout << ans << endl;

  return 0;
}
