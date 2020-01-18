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
  ll power=1;
  rep(i,n){
    power *= (i+1);
    if(power >= 1000000007) power = power % 1000000007;
  }

  cout << power << endl;

  return 0;
}
