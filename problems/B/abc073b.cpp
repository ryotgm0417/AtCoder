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
  int l[n],r[n];
  rep(i,n) cin >> l[i] >> r[i];

  int num=0;
  rep(i,n) num += r[i]-l[i]+1;

  cout << num << endl;

  return 0;
}
