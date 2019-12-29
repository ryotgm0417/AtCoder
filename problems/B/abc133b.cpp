#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,d;
  cin >> n >> d;
  int x[n][d];
  rep(i,n){
    rep(j,d){
      cin >> x[i][j];
    }
  }

  int count = 0;

  rep(i,n){
    rep(j,i){
      int sum = 0;
      rep(k,d){
        sum += (x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
      }
      rep(k,401){
        if(sum == k*k){
          count++;
          break;
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}
