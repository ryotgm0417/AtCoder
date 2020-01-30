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
  VI h(n);
  rep(i,n) cin >> h[i];

  int cnt=0,max=0;
  rep(i,n-1){
    if(h[i+1] <= h[i]){
      cnt++;
    }else{
      cnt = 0;
    }
    if(cnt > max) max = cnt;
  }

  cout << max << endl;

  return 0;
}
