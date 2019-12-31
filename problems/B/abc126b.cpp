#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;
  int input = stoi(s);
  int first = input / 100;
  int last = input % 100;
  if(0 < first && first < 13){
    if(0 < last && last < 13){
      cout << "AMBIGUOUS" << endl;
    }else{
      cout << "MMYY" << endl;
    }
  }else{
    if(0 < last && last < 13){
      cout << "YYMM" << endl;
    }else{
      cout << "NA" << endl;
    }
  }
  return 0;
}
