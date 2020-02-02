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
  if(s=="Sunny") cout << "Cloudy";
  else if(s=="Cloudy") cout << "Rainy";
  else cout << "Sunny";
  return 0;
}
