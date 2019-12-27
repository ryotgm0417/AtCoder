#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

bool check(int p[], int n){
  bool ret = true;
  rep(i,n-1){
    if(p[i+1]-p[i]!=1){
      ret = false;
    }
  }
  return ret;
}

int main(){
  int n;
  cin >> n;
  int p[n];
  rep(i,n) cin >> p[i];
  bool flag=false;

  if(check(p,n)){
  	cout << "YES" << endl;
    return 0;
  }

  rep(i,n){
    rep(j,i){
      swap(p[i], p[j]);
      if(check(p,n)){
        flag = true;
        break;
      }
      swap(p[i], p[j]);
    }
  }

  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
