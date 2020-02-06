#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s;
  cin >> s;
  int n = s.size();

  int blue=0,red;
  rep(i,n){
    if(s[i]=='1') blue++;
  }
  red = n - blue;

  cout << (min(blue,red)*2) << endl;

  return 0;
}
