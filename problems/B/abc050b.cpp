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
  VI t(n);
  rep(i,n) cin >> t[i];

  int m;
  cin >> m;
  VI p(m),x(m);
  rep(i,m) cin >> p[i] >> x[i];

  rep(i,m){
    int sum=0;
    rep(j,n){
      if(j==p[i]-1) sum += x[i];
      else sum += t[j];
    }
    cout << sum << endl;
  }

  return 0;
}
