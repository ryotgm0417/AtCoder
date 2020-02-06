#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int h,w,n;
  cin >> h >> w >> n;
  VI a(n);
  rep(i,n) cin >> a[i];

  VI s(h*w);
  int id=0;
  rep(i,n){
    rep(_,a[i]){
      s[id] = i+1;
      id++;
    }
  }

  rep(i,h){
    rep(j,w){
      if(i%2==0) cout << s[i*w + j] << " ";
      else cout << s[i*w + (w-j-1)] << " ";
    }
    cout << endl;
  }


  return 0;
}
