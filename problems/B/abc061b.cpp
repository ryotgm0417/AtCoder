#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n,m;
  cin >> n >> m;

  int r[n]={ 0 },a,b;
  rep(i,m){
    cin >> a >> b;
    r[a-1]++;
    r[b-1]++;
  }

  rep(i,n) cout << r[i] << endl;


  return 0;
}
