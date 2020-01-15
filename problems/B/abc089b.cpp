#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

int main(){
  int n;
  cin >> n;
  char c;
  bool yellow = false;

  rep(i,n){
    cin >> c;
    if(c=='Y') yellow=true;
  }

  if(yellow) cout << "Four" << endl;
  else cout << "Three" << endl;

  return 0;
}
