#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int first_digit(int n){
  if(n >= 100000) return (n/100000);
  if(n >= 10000) return (n/10000);
  if(n >= 1000) return (n/1000);
  if(n >= 100) return (n/100);
  if(n >= 10) return (n/10);
  return n;
}


int main(){
  int n;
  cin >> n;

  int cnt=0;
  VVI t(9, VI(9,0));

  rep2(i,1,n+1){
    int f = first_digit(i);
    int l = i%10;

    if(l==0) continue;
    if(l==f) cnt++;

    cnt += 2*t[l-1][f-1];
    t[f-1][l-1]++;
  }

  cout << cnt << endl;

  return 0;
}
