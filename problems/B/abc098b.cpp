#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  string s;
  cin >> n >> s;

  int max=0;
  string alphabet="abcdefghijklmnopqrstuvwxyz";
  for(int i=1;i<n;i++){
    string x = s.substr(0,i);
    string y = s.substr(i,n-i);
    int count = 0;

    rep(j,26){
      char c = alphabet[j];
      if(x.find(c)!=string::npos && y.find(c)!=string::npos){
        count++;
      }
    }

    if(count > max) max = count;
  }

  cout << max << endl;

  return 0;
}
s
