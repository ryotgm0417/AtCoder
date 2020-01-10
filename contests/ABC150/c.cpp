#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int dict_order(int n, int *arr){

  if(n==1) return 0;

  int first = arr[0];
  int next_arr[n-1];

  rep(i,n-1){
    if(arr[i+1] > first) next_arr[i] = arr[i+1] - 1;
    else next_arr[i] = arr[i+1];
  }

  int factorial = 1;
  rep(i,n-1){
    factorial *= (i+1);
  }

  return (first-1)*factorial + dict_order(n-1, next_arr);
}


int main(){
  int n;
  cin >> n;
  int p[n], q[n];
  rep(i,n) cin >> p[i];
  rep(i,n) cin >> q[i];

  int a = dict_order(n,p);
  int b = dict_order(n,q);

  cout << abs(a-b) << endl;

  return 0;
}
