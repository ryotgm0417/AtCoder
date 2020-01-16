#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n;
  cin >> n;
  int a[n];
  rep(i,n) cin >> a[i];

  int btn=1,cnt=0;
  while(btn!=2){
    btn = a[btn-1];
    cnt++;
    if(cnt > n){
      cnt = -1;
      break;
    }
  }

  cout << cnt << endl;

  return 0;
}
