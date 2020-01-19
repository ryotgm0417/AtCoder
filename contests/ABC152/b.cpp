#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int a,b;
  cin >> a >> b;

  if(a > b){
    rep(i,a) cout << b;
  }else if(b > a){
    rep(i,b) cout << a;
  }else{
    rep(i,a) cout << a;
  }

  return 0;
}
