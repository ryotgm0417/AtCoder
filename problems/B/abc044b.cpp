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
  int len = s.length();
  VI a(26,0);

  rep(i,len){
    int x = s[i] - 'a';
    a[x]++;
  }

  bool flag=true;
  rep(i,26){
    if(a[i]%2==1){
      flag = false;
      break;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
