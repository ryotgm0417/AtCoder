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

  int nc=n, sn=0;
  for(int i=9;i>=0;i--){
    int d = nc / pow(10,i);
    nc = nc - d*pow(10,i);
    sn += d;
  }

  if(n%sn==0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
