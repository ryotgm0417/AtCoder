#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s[3];
  cin >> s[0] >> s[1] >> s[2];

  int turn=0;
  VI num(3), ini(3);
  rep(i,3){
    ini[i] = s[i].length();
    num[i] = s[i].length();
  }

  while(1){
    if(num[turn] == 0) break;
    char x = s[turn][ini[turn] - num[turn]];
    num[turn]--;
    if(x=='a') turn = 0;
    else if(x=='b') turn = 1;
    else turn = 2;
  }

  if(turn==0) cout << 'A' << endl;
  else if(turn==1) cout << 'B' << endl;
  else cout << 'C' << endl;

  return 0;
}
