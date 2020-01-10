#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  int a,b,k;
  cin >> a >> b >> k;
  vector<int> v;
  rep(i,k){
    int x = a+i;
    if(find(v.begin(), v.end(), x) == v.end() && x<=b) v.push_back(a+i);
  }
  rep(i,k){
    int x = b-k+i+1;
    if(find(v.begin(), v.end(), x) == v.end() && x>=a) v.push_back(b-k+i+1);
  }

  for(auto it=v.begin(); it != v.end(); it++){
    cout << *it << endl;
  }

  return 0;
}
