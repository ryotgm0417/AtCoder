#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int h,n;
  cin >> h >> n;
  VI a(n);
  rep(i,n) cin >> a[i];

  int sum=0;
  rep(i,n){
    sum += a[i];
  }

  if(sum >= h) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
