#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;
  int d[N],i,j,sum=0;
  for(i=0;i<N;i++) cin >> d[i];

  for(i=0;i<N;i++){
    for(j=0;j<i;j++){
      sum += d[i]*d[j];
    }
  }

  cout << sum << endl;

  return 0;
}
