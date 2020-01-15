#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string s;
  cin >> s;

  int num = s.length() - 2;
  cout << s[0] << num << s[s.length()-1] << endl;

  return 0;
}
