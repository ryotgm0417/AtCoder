#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

struct Restaurant{
  int id, p;
  string s;
};

bool compare(Restaurant i, Restaurant j){
  if(i.s != j.s) return (i.s < j.s);
  else return (i.p > j.p);
}

int main(){
  int n;
  cin >> n;
  Restaurant arr[n];
  rep(i,n){
    cin >> arr[i].s >> arr[i].p;
    arr[i].id = i;
  }

  sort(arr,arr+n,compare);

  rep(i,n){
    cout << (arr[i].id+1) << endl;
  }
  return 0;
}
