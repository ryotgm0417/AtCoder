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

  VVI hit(n, VI(0));
  VI num(n,0);
  int total = 0;
  int num_del = 0;

  rep(i,n){
    rep(j,i){
      if( (m[i]<m[j] && m[j]<M[i]) || (m[j]<m[i] && m[i]<M[j]) ) {
        num[i]++;
        num[j]++;
        total++;
        hit[i].push_back(j);
        hit[j].push_back(i);
      }
    }
  }

  while(total > 0){
    int NUM=0,el;
    rep(i,n){
      if( num[i] > NUM ){
        NUM = num[i];
        el = i;
      }
    }

    total -= NUM;
    num[el] = 0;

    for(int x : hit[el]){
      num[x]--;
    }
    num_del++;
  }

  cout << (n-num_del) << endl;

  return 0;
}
