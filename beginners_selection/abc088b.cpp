#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a[N];
  for(int i=0; i<N; i++){
    cin >> a[i];
  }
  sort(a, a+N);

  int score=0;
  for(int j=0; j<N; j++){
    score += a[N-(j+1)]*pow(-1,j);
  }
  cout << score << endl;
  return 0;
}
