#include <iostream>
#include <string>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  int hugs = 0;
  for(int i=0; i<len; i++){
    if(S[i] != S[len-(i+1)]){
      S[len-(i+1)] = S[i];
      hugs++;
    }
  }
  cout << hugs << endl;
  return 0;
}
