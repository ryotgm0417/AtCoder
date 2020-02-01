#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  ll w,h,x,y;
  cin >> w >> h >> x >> y;

  ll area = w*h/2;
  int dec=0;
  if(w*h % 2 == 1) dec = 5;

  int flag=0;
  if(2*x==w && 2*y==h) flag = 1;

  cout << area << "." << dec << " " << flag;

  return 0;
}
