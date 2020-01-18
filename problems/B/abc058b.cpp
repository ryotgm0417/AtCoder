#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string o,e;
  cin >> o >> e;
  int len = e.length();

  rep(i,len){
    cout << o[i] << e[i];
  }
  if(o.length() > len) cout << o[len];

  return 0;
}
