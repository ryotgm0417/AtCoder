#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  VI h(n);
  rep(i,n) cin >> h[i];

  bool flag=true;
  int cnt=0;
  while(flag){
    int start=-1,end=n;
    rep(i,n){
      if(h[i] > 0){
        start = i;
        break;
      }
    }
    rep2(i,start,n){
      if(h[i] == 0){
        end = i;
        break;
      }
    }
    if(start == -1){
      flag = false;
    }else{
      rep2(i,start,end){
        h[i]--;
      }
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}
