#include <iostream>
using namespace std;

int main(){
  int N,a,b;
  int d1,d2,d3,d4,d5;
  int sum = 0;
  cin >> N >> a >> b;
  for(int i=1;i<=N;i++){
    d1 = i/10000;
    d2 = (i%10000)/1000;
    d3 = (i%1000)/100;
    d4 = (i%100)/10;
    d5 = i%10;
    if(a <= d1+d2+d3+d4+d5 && d1+d2+d3+d4+d5 <= b) sum += i;
  }
  cout << sum << endl;
  return 0;
}
