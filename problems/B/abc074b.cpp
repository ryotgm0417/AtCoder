#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n,k;
  cin >> n >> k;
  int x[n];
  rep(i,n) cin >> x[i];

  int dist=0;
  rep(i,n){
    dist += 2*min(x[i], k-x[i]);
  }

  cout << dist << endl;

  return 0;
}
