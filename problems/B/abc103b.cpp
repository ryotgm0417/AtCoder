#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string s,t;
  cin >> s >> t;

  bool flag=false;
  rep(i,s.length()){
    if(s==t){
      flag=true;
      break;
    }else{
      rotate(s.begin(),s.begin()+1,s.end());
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;

}
