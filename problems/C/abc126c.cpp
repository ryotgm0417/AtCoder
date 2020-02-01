#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int log2(int n){
  int ans=0, x=1;
  while(x < n){
    x *= 2;
    ans++;
  }
  return ans;
}

int main(){
  int n,k;
  cin >> n >> k;

  double ans;
  rep(i,n){
    int m = log2((k+i)/(i+1));
    ans += pow(0.5, m);
  }

  ans /= n;

  cout << setprecision(12) << ans << endl;

  return 0;
}
