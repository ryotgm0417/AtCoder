#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int max_ops = 100;
  for(int i=0;i<N;i++){
    int ai, count=0;
    cin >> ai;
    while(ai%2==0){
      count++;
      ai /= 2;
    }
    if(count < max_ops){
      max_ops = count;
    }
  }
  cout << max_ops << endl;
  return 0;
}
