#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int first_digit(int n){
  if(n >= 100000) return (n/100000);
  if(n >= 10000) return (n/10000);
  if(n >= 1000) return (n/1000);
  if(n >= 100) return (n/100);
  if(n >= 10) return (n/10);
  return n;
}


int main(){
  int n;
  cin >> n;

  int cnt=0;

  rep2(i,1,n+1){
    rep2(j,1,i+1){
      if(i==j){
        cnt++;
      }else{
        int a1 = first_digit(i);
        int a2 = i%10;
        int b1 = first_digit(j);
        int b2 = j%10;
        if(a1==b2 && b1==a2) cnt += 2;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
