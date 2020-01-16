#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;

int main(){
  string a,b;
  cin >> a >> b;

  int Ab=0;
  int lena = a.length(), lenb = b.length();
  if(lena > lenb) Ab = 1;
  else if(lenb > lena) Ab = -1;
  else{
    rep(i,lena){
      if(a[i] > b[i]){
        Ab = 1;
        break;
      }else if(b[i] > a[i]){
        Ab = -1;
        break;
      }
    }
  }

  if(Ab==1) cout << "GREATER" << endl;
  else if(Ab==-1) cout << "LESS" << endl;
  else cout << "EQUAL" << endl;

  return 0;
}
