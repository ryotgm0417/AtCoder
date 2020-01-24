#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using VD = vector<double>;
using VVD = vector<vector<double>>;

int main(){
  int n;
  cin >> n;
  VI x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];

  VVD d(n,VD(n,0));
  rep(i,n){
    rep(j,i){
      double z = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
      d[i][j] = z;
      d[j][i] = z;
    }
  }

  VI v(n);
  rep(i,n) v[i] = i;
  double sum=0;

  do {
    rep(i,n-1){
      int now=v[i], next=v[i+1];
      sum += d[now][next];
    }
  }while(next_permutation(v.begin(), v.end()));

  int fact=1;
  rep(i,n) fact *= (i+1);

  cout << setprecision(12) << (sum/(double)fact) << endl;

  return 0;
}
