#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;
  s += 'x';
  int len = s.length();

  int cur=0,max=0;
  rep(i,len){
    if(s[i]=='A' || s[i]=='G' || s[i]=='C' || s[i]=='T'){
      cur++;
    }else{
      if(cur>max) max = cur;
      cur = 0;
    }
  }

  cout << max << endl;

  return 0;
}
