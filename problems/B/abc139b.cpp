#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int a,b;
  cin >> a >> b;
  int ans = (b+a-3)/(a-1);

  cout << ans << endl;

  return 0;
}
