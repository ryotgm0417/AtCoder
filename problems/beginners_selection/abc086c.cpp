#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int t[N+1], x[N+1], y[N+1];
  t[0] = 0;
  x[0] = 0;
  y[0] = 0;
  int flag = 0;

  for(int i=0; i<N; i++){
    cin >> t[i+1] >> x[i+1] >> y[i+1];
  }

  for(int i; i<N; i++){
    int dt = t[i+1] - t[i];
    int manhattan = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if(dt < manhattan || dt%2 != manhattan%2){
      flag = 1;
      break;
    }
  }

  if(flag==0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
