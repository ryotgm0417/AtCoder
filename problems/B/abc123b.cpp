#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int t[5];
  rep(i,5) cin >> t[i];

  int total=0,rem=10;
  rep(i,5){
    if(t[i]%10==0){
      total += t[i];
    }else{
      if(t[i]%10 < rem) rem = t[i]%10;
      total += (t[i]/10 + 1)*10;
    }
  }

  total = total - 10 + rem;

  cout << total << endl;
  return 0;
}
