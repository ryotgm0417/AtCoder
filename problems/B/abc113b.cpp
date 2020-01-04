#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int n;
  double t,a;
  cin >> n >> t >> a;

  double min=300,tmp;
  int id;
  rep(i,n){
    cin >> tmp;
    tmp = t - tmp*0.006;
    if(abs(a-tmp) < min){
      min = abs(a-tmp);
      id = i+1;
    }
  }

  cout << id << endl;

  return 0;

}
