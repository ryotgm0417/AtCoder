#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  int n;
  cin >> n;

  int M=0,out=1;
  rep(i,n){
    int num = i+1;
    int count = 0;
    while(num%2==0){
      num = num/2;
      count++;
    }
    if(count>M){
      out = i+1;
      M = count;
    }
  }

  cout << out << endl;

  return 0;
}
