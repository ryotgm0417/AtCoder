#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;

  bool A=false,C=false,low=true;
  int idC=100;

  if(s[0]=='A') A=true;

  rep(i,s.length()-3){
    if(s[i+2]=='C'){
      if(i+2 > idC){
        C=false;
        break;
      }else{
        C=true;
        idC=i+2;
      }
    }
  }

  rep(i,s.length()){
    if(i==0 || i==idC){
      continue;
    }else{
      if(isupper(s[i])){
        low=false;
        break;
      }
    }
  }

  bool ac = A && C && low;
  if(ac) cout << "AC" << endl;
  else cout << "WA" << endl;

  return 0;

}
