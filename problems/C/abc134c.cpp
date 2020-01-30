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
  VI a(n);
  rep(i,n) cin >> a[i];

  int max=0,max2=0;
  rep(i,n){
    if(a[i] > max){
      max2 = max;
      max = a[i];
    }else if(a[i] > max2){
      max2 = a[i];
    }
  }

  rep(i,n){
    if(a[i] == max) cout << max2 << endl;
    else cout << max << endl;
  }

  return 0;
}
