#include <iostream>
using namespace std;

int main(){
  int input,s1,s2,s3;
  cin >> input;
  s1 = input / 100;
  s2 = (input % 100) / 10;
  s3 = input % 10;
  cout << (s1+s2+s3) << endl;
  return 0;
}
