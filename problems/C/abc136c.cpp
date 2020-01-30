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

  bool flag=true;

  rep(i,n-1){
    int x = (n-1)-i;
    if(h[x-1] > h[x]) h[x-1]--;
    if(h[x-1] > h[x]){
      flag = false;
      break;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
