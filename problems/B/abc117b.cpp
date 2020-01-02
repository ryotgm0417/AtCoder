#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int l,sum=0,max=0;
  rep(i,n){
    cin >> l;
    sum += l;
    if(l>max) max=l;
  }

  if(max < (sum-max)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;

}
