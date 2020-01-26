#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n;
  string s;
  cin >> n >> s;

  int cnt=1;
  rep(i,n-1){
    if(s[i] != s[i+1]) cnt++;
  }

  cout << cnt << endl;

  return 0;
}
