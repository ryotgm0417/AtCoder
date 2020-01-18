#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef pair<int,int> P;

int main(){
  int n;
  cin >> n;
  VI x(n),l(n);
  vector<P> r(n,P(0,0));

  rep(i,n){
    cin >> x[i] >> l[i];
    r[i].first = x[i] + l[i];
    r[i].second = x[i] - l[i];
  }

  sort(r.begin(), r.end());

  int cur = 0;
  int ans = 0;
  bool flag=true;

  while(flag){
    ans++;
    int border = r[cur].first;
    rep2(i, cur, n){
      if( r[i].second >= border ){
        cur = i;
        flag = true;
        break;
      }else{
        flag = false;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
