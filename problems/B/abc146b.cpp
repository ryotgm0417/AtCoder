#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  int len = S.size();

  for(int i=0; i<len; i++){
    S[i] += N;
    if(S[i] > 'Z') S[i] -= 26;
  }

  cout << S << endl;

  return 0;
}
