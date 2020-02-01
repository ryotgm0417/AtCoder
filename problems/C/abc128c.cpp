#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int pow2(int n){
  int ans=1;
  rep(i,n) ans *= 2;
  return ans;
}

int main(){
  int n,m;
  cin >> n >> m;
  VI k(m);
  VVI s(m, VI(n,0));
  rep(i,m){
    cin >> k[i];
    rep(j,k[i]){
      int x;
      cin >> x;
      s[i][x-1] = 1;
    }
  }
  VI p(m);
  rep(i,m) cin >> p[i];

  VI Switch(n);
  int ans=0;
  rep(i,pow(2,n)){
    rep(j,n){
      Switch[j] = (i % pow2(j+1)) / pow2(j);
    }

    bool flag=true;
    rep(j,m){
      int num=0;
      rep(k,n){
        if(s[j][k]==1 && Switch[k]==1) num++;
      }
      if(num%2 != p[j]) flag = false;
    }
    if(flag) ans++;

    //cout << i << " " << flag << endl;
  }

  cout << ans;

  return 0;
}
