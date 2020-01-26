#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  VI b(n+1);
  b[0] = 100005;
  b[n] = 100005;
  rep(i,n-1) cin >> b[i+1];

  int sum = 0;
  rep(i,n){
    sum += min(b[i], b[i+1]);
  }

  cout << sum << endl;

  return 0;
}
