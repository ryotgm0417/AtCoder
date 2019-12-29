#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n,l;
  cin >> n >> l;
  int eat=1000, pie=0;

  rep(i,n){
    int flavor = l+i;
    pie += flavor;
    if(abs(l+i) < abs(eat)) eat = flavor;
  }

  pie -= eat;

  cout << pie << endl;

  return 0;
}
