#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,m;
  string tmp;
  cin >> n;

  vector<string> s,t;
  rep(i,n){
    cin >> tmp;
    s.push_back(tmp);
  }

  cin >> m;
  rep(i,m){
    cin >> tmp;
    t.push_back(tmp);
  }

  int max=0;
  for(auto it=s.begin(); it!=s.end(); it++){
    int x = 0;
    for(auto jt=s.begin(); jt!=s.end(); jt++){
      if(*jt == *it) x++;
    }
    for(auto jt=t.begin(); jt!=t.end(); jt++){
      if(*jt == *it) x--;
    }

    if(x > max) max = x;
  }

  cout << max << endl;

  return 0;
}
