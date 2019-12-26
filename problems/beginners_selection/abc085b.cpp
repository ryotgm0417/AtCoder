#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  int d[N];
  for(int i=0; i<N; i++){
    cin >> d[i];
  }
  sort(d, d+N);
  int tmp = 0;
  int layers = 0;
  for(int i=0; i<N; i++){
    if(d[i] > tmp){
      tmp = d[i];
      layers++;
    }
  }
  cout << layers << endl;
  return 0;
}
