#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int w,a,b;
  cin >> w >> a >> b;

  int ar=a+w, br=b+w;
  if(b > ar) cout << (b-ar) << endl;
  else if(a > br) cout << (a-br) << endl;
  else cout << 0 << endl;

  return 0;
}
