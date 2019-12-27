#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int a[n],b[n],c[n-1];
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  rep(i,n-1) cin >> c[i];

  int points = 0;
  int prev = -100;
  rep(i,n){
    int index = a[i] - 1;
    points += b[index];
    if(index-prev == 1) points += c[prev];
    prev = index;
  }

  cout << points << endl;

  return 0;
}
