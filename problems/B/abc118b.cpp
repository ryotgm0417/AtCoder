#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;
  int food[m] = {};

  int ki,aij;

  rep(i,n){
    cin >> ki;
    rep(j,ki){
      cin >> aij;
      food[aij-1]++;
    }
  }

  int count = 0;
  rep(i,m){
    if(food[i]==n) count++;
  }

  cout << count << endl;

  return 0;
}
