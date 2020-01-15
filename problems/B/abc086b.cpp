#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int a,b,x;
  cin >> a >> b;
  if(b==100) x = a*1000 + b;
  else if(b>=10) x = a*100 + b;
  else x = a*10 + b;

  bool flag=false;
  rep(i,1000){
    if(i*i == x) flag = true;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
