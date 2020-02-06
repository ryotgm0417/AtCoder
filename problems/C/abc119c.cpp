#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  VI l(n);
  rep(i,n) cin >> l[i];

  int p[n];
  rep(i,n) p[i] = i+1;

  int M = 1000000;
  do{
    VI sum(n);
    sum[0] = l[p[0]-1];
    rep(i,n-1){
      sum[i+1] = sum[i] + l[p[i+1] - 1];
    }

    rep2(i,1,n-1){
      rep2(j,i+1,n){
        rep2(k,j+1,n+1){
          int mp = (k-3)*10;
          mp += abs(a - sum[i-1]);
          mp += abs(b - (sum[j-1] - sum[i-1]));
          mp += abs(c - (sum[k-1] - sum[j-1]));

          if(mp < M) M = mp;
        }
      }
    }
  }while(next_permutation(p,p+n));

  cout << M;

  return 0;
}
