#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s;
  cin >> s;

  int a=0,b=0;
  int len = s.size();

  rep(i,len){
    if(i%2==0){
      if(s[i]=='0') a++;
      else b++;
    }else{
      if(s[i]=='1') a++;
      else b++;
    }
  }

  cout << min(a,b) << endl;


  return 0;
}
