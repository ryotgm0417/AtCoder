#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;
  bool flag = false;
  for(int i=1;i<10;i++){
    if(N%i==0 && N/i < 10){
      flag = true;
      break;
    }
  }
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
