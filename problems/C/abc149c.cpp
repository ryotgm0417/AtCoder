#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int x;
  cin >> x;
  bool found=false;

  while(!found){
    bool prime=true;
    rep2(i,2,(int)sqrt(x)+1){
      if(x%i==0){
        prime = false;
      	break;
      }
    }
    if(prime) found=true;
    x++;
  }

  cout << (x-1) << endl;

  return 0;
}
