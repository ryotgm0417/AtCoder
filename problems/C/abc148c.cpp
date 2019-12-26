#include <iostream>
#include <string>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int p,q,r=-1;
  long long out;
  // 最小公倍数を求める
  if(A>B){
    p=A; q=B;
  }else{
    p=B; q=A;
  }
  while(r!=0){
    r = p%q;
    p = q;
    q = r;
  }
  // intでの計算範囲を超えてしまう時に備えて二行に分ける
  out = A/p;
  out *= B;
  cout << out << endl;

  return 0;
}
