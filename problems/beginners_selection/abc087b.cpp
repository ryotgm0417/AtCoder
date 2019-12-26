#include <iostream>
using namespace std;

int main(){
  int a,b,c,x;
  int i,j,out=0;
  cin >> a >> b >> c >> x;
  x /= 50;
  for(i=0;i<=a && (x-10*i)>=0;i++){
    for(j=0;j<=b && (x-10*i-2*j)>=0; j++){
      if( c>=(x-10*i-2*j) ) out++;
    }
  }
  cout << out << endl;

  return 0;
}
