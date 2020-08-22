#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

int main(){
  int n,m;
  cin >> n >> m;

  int ac[n], wa[n];
  rep(i,n){
    ac[i]=0;
    wa[i]=0;
  }

  rep(i,m){
    int pi;
    string si;
    cin >> pi >> si;
    pi = pi - 1;
    if(si=="AC"){
      ac[pi]++;
    }else{
      if(ac[pi] == 0) wa[pi]++;
    }
  }

  int cor=0,pen=0;
  rep(i,n){
    if(ac[i] > 0){
      cor++;
      pen += wa[i];
    }
  }

  cout << cor << " " << pen << endl;

  return 0;
}
