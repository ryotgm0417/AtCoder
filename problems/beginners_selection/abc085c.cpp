#include <iostream>
using namespace std;

int main(){
  int N, Y;
  int x=-1;
  int y=-1;
  int z=-1;
  cin >> N >> Y;
  Y /= 1000;

  for(int i=0; i<=(Y-N)/9; i++){
    if( (Y-N-9*i) % 4 == 0 ){
      if( 5*i+5*N-Y >= 0 ){
      	x = i;
      	y = (Y-N-9*i) / 4;
      	z = N-x-y;
        break;
      }
    }
  }
  
  cout << x << " " << y << " " << z << endl;

  return 0;
}
