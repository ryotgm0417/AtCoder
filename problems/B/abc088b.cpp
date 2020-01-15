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
  VI a(n);
  rep(i,n) cin >> a.at(i);

  int alice=0, bob=0;
  sort(a.begin(), a.end(), greater<int>());
  rep(i,n){
    if(i%2==0) alice += a.at(i);
    else bob += a.at(i);
  }

  cout << (alice - bob) << endl;

  return 0;
}
