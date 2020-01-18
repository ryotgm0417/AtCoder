#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int h,w,n;
  cin >> h >> w >> n;

  int b=0,op=0;
  while(b < n){
    if(h >= w){
      b += h;
      w--;
    }else{
      b += w;
      h--;
    }
    op++;
  }

  cout << op << endl;

  return 0;
}
