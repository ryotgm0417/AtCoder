#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,k,count=0,tmp;
  cin >> n >> k;
  rep(i,n){
    cin >> tmp;
    if(tmp >= k) count++;
  }
  cout << count << endl;
  return 0;
}
