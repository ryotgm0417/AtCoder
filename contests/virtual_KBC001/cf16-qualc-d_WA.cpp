#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

vector<string> c;

int left(){
  int cost=0;
  int h = c.size();
  rep(i,h){
    if(c[i][0] == c[i][1] && c[i][1] != '-') cost++;
  }
  rep(i,h-1){
    c[h-i-1][0] = c[h-i-2][0];
  }
  c[0][0] = '-';
  return cost;
}

int right(){
  int cost=0;
  int h = c.size();
  rep(i,h){
    if(c[i][2] == c[i][1] && c[i][1] != '-') cost++;
  }
  rep(i,h-1){
    c[h-i-1][2] = c[h-i-2][2];
  }
  c[0][2] = '-';
  return cost;
}

int mid(){
  int cost=0;
  int h = c.size();
  rep(i,h){
    if(c[i][0] == c[i][1] && c[i][1] != '-') cost++;
    if(c[i][2] == c[i][1] && c[i][1] != '-') cost++;
  }
  rep(i,h-1){
    c[h-i-1][1] = c[h-i-2][1];
  }
  c[0][1] = '-';
  return cost;
}

int main(){
  int h,w;
  cin >> h >> w;
  rep(i,h){
    string s;
    cin >> s;
    c.push_back(s);
  }

  int cost=0;


  return 0;
}
