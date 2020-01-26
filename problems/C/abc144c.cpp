#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll n;
  cin >> n;

  ll min = n+1;
  rep2(i,1,(int)sqrt(n)+1){
    if(n%i==0){
      ll x = i + (n/i);
      if(x < min) min = x;
    }
  }

  cout << (min-2) << endl;

  return 0;
}
