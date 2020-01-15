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

  ll L0=2, L1=1, L;
  if(n==1){
    cout << L1 << endl;
  }else{
    rep(i,n-1){
      L = L1 + L0;
      L0 = L1;
      L1 = L;
    }

    cout << L << endl;
  }

  return 0;
}
