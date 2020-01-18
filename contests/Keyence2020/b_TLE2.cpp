#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;


int main(){
  int n;
  cin >> n;
  VI x(n),l(n),m(n),M(n);
  rep(i,n){
    cin >> x[i] >> l[i];
    m[i] = x[i] - l[i];
    M[i] = x[i] + l[i];
  }

  VVI hit(n, VI(n,0));
  bool flag = false;

  rep(i,n){
    rep(j,i){
      if( (m[i]<m[j] && m[j]<M[i]) || (m[j]<m[i] && m[i]<M[j])){
        hit[i][j] = 1;
        hit[j][i] = 1;
        flag = true;
      }
    }
  }

  int num_del = 0;

  while(flag){
    int max_el, max_hit;
    rep(i,n){
      int sum = 0;
      rep(j,n){
        sum += hit[i][j];
      }
      if(sum > max_hit){
        max_el = i;
        max_hit = sum;
      }
    }

    rep(i,n){
      hit[max_el][i] = 0;
      hit[i][max_el] = 0;
    }

    flag = false;
    rep(i,n){
      rep(j,n){
        if(hit[i][j] > 0) flag = true;
      }
    }

  	num_del++;
  }

  cout << (n-num_del) << endl;

  return 0;
}
