#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  bool flag=false;

  rep(i,26){
    rep(j,15){
      if(4*i+7*j==n) flag=true;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
