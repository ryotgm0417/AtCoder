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
  VI o(n);
  rep(i,n){
    int ai;
    cin >> ai;
    o[ai-1] = i+1;
  }

  rep(i,n){
    cout << o[i] << " ";
  }

  return 0;
}
