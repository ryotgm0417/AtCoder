#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;
  int len=s.length();

  int min=1000,x;
  string tmp;
  rep(i,len-2){
    tmp = s.substr(i,3);
    x = stoi(tmp);
    if( abs(x-753) < min ) min = abs(x-753);
  }

  cout << min << endl;

  return 0;

}
