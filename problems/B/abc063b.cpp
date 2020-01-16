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

  int alph[26]={ 0 };
  rep(i,len){
    int id = s[i] - 'a';
    alph[id]++;
  }

  bool flag=true;
  rep(i,26){
    if(alph[i] > 1) flag=false;
  }

  if(flag) cout << "yes" << endl;
  else cout << "no" << endl;

  return 0;
}
