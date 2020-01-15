#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int start = max(a,c);
  int end = min(b,d);

  cout << max(0,end-start) << endl;

  return 0;
}
