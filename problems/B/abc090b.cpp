#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

int main(){
  int a,b;
  cin >> a >> b;

  int count=0;
  rep2(i,a,b+1){
    int d1,d2,d3,d4,d5;
    d1 = i/10000;
    d2 = (i%10000)/1000;
    d3 = (i%1000)/100;
    d4 = (i%100)/10;
    d5 = i%10;

    if(d1==d5 && d2==d4) count++;
  }

  cout << count << endl;

  return 0;
}
