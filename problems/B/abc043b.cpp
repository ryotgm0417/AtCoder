#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  string s;
  vector<char> out;
  cin >> s;

  rep(i,s.length()){
    char c = s[i];
    if(c=='B'){
      if(!out.empty()) out.pop_back();
    }else{
      out.push_back(c);
    }
  }

  for(auto x : out){
    cout << x;
  }

  return 0;
}
