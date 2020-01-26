#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int,int>;

int main(){
  int n,d,a;
  cin >> n >> d >> a;
  vector<P> vp(n);

  rep(i,n){
    int x,h;
    cin >> x >> h;
    vp[i].first = x;
    vp[i].second = (h+a-1)/a;
  }

  sort(vp.begin(),vp.end());

  ll b=0;
  rep(i,n){
    b += vp[i].second;
    rep2(j,i+1,n){
      if( vp[j].first <= vp[i].first + 2*d ){
        vp[j].second -= vp[i].second;
      }else{
        break;
      }
    }
    vp[i].second = 0;
  }

  cout << b << endl;

  return 0;
}
