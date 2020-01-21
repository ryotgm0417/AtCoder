#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int k,s;
  cin >> k >> s;

  int cnt=0;

  rep(x,k+1){
    rep(y,k+1){
      int z = s-x-y;
      if(z >= 0 && z <= k) cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
