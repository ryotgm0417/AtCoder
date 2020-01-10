#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int count = 0;

  rep(i,n-2){
    if(s.substr(i,3) == "ABC") count++;
  }

  cout << count << endl;


  return 0;
}
