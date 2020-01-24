#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll a,b,k;
  cin >> a >> b >> k;

  if(k > a+b){
    b = 0;
    a = 0;
  }else if(k > a){
    b = b+a-k;
    a = 0;
  }else{
    a = a - k;
  }

  cout << a << " " << b << endl;

  return 0;
}
