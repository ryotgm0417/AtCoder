#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int w,h,n;
  cin >> w >> h >> n;
  VI x(n), y(n), a(n);
  rep(i,n) cin >> x[i] >> y[i] >> a[i];

  int xmin=0,xmax=w,ymin=0,ymax=h;
  rep(i,n){
    if( a[i]==1 && x[i] > xmin ) xmin = x[i];
    if( a[i]==2 && x[i] < xmax ) xmax = x[i];
    if( a[i]==3 && y[i] > ymin ) ymin = y[i];
    if( a[i]==4 && y[i] < ymax ) ymax = y[i];
  }

  if( xmin < xmax && ymin < ymax ) cout << ((xmax-xmin)*(ymax-ymin)) << endl;
  else cout << 0 << endl;

  return 0;
}
