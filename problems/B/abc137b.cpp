#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

typedef long double ld;

int main(){
  int k,x;
  cin >> k >> x;
  for(int i=-(k-1);i<k;i++){
    cout << (x+i) << " ";
  }
  cout << endl;
  return 0;
}
