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

  if(s=="SUN") cout << 7;
  else if(s=="MON") cout << 6;
  else if(s=="TUE") cout << 5;
  else if(s=="WED") cout << 4;
  else if(s=="THU") cout << 3;
  else if(s=="FRI") cout << 2;
  else cout << 1;

  return 0;
}
