#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string s;
  cin >> s;

  int len = s.length();
  int a,z;
  rep(i,len){
    if(s[i]=='A'){
      a = i;
      break;
    }
  }
  rep(i,len){
    if(s[i]=='Z') z = i;
  }

  cout << (z-a+1) << endl;
  return 0;
}
