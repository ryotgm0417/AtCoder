#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int max=0,sum=0,p;
  rep(i,n){
    cin >> p;
    sum += p;
    if(p>max) max = p;
  }
  sum -= max/2;

  cout << sum << endl;

  return 0;

}
