#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  string S,T;
  string out="";
  cin >> N;
  cin >> S >> T;
  for(int i=0; i<N; i++){
    out += S[i];
    out += T[i];
  }
  cout << out << endl;
  return 0;
}
