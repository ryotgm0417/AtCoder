#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string S;
  bool easy=true;
  cin >> S;
  rep(i,S.length()){
    if( (i%2==0 && S[i]=='L') || (i%2==1 && S[i]=='R') ){
      easy = false;
      break;
    }
  }

  if(easy) cout << "Yes";
  else cout << "No";

  return 0;
}
