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
  VI p(n);
  rep(i,n) cin >> p[i];

  int cnt=0;
  int min=n+1;
  rep(i,n){
    if(p[i] < min){
      cnt++;
      min = p[i];
    }
  }

  cout << cnt << endl;

  return 0;
}
