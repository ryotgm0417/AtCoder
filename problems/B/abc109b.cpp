#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  string w[n];
  bool flag=true;

  cin >> w[0];

  rep(i,n-1){
    cin >> w[i+1];
    if(w[i].back()==w[i+1][0]){
      rep(j,i+1){
        if(w[j]==w[i+1]) flag=false;
      }
    }else{
      flag=false;
    }
    if(!flag) break;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
