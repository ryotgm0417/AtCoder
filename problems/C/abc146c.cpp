#include <iostream>
#include <cmath>
using namespace std;

int main(){
  long a,b,x,N,dN;
  cin >> a >> b >> x;

  // 2分探索法
  long max=1000000001, min=0;

  while(max-min > 1){
    N = (max + min)/2;
    for(int i=0;i<10;i++){
      if(N >= pow(10,i)){
        dN = i+1;
      }
    }
    if(x >= a*N+b*dN){
      min = N;
    }else{
      max = N;
    }
  }

  cout << min << endl;

  return 0;
}
