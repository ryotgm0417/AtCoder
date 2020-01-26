#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n,k,q;
  cin >> n >> k >> q;
  VI c(n);
  rep(i,q){
    int a;
    cin >> a;
    c[a-1]++;
  }
  rep(i,n){
    if(q-c[i] < k) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
