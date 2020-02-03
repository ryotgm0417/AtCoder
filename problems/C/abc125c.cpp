#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

// ユークリッドの互除法
int gcd(int a,int b) { return b?gcd(b,a%b):a; }

int main(){
  int n;
  cin >> n;
  VI a(n);
  rep(i,n) cin >> a[i];

  sort(a.begin(), a.end());

  int all = a[0];
  set<int> S;
  rep(i,n-1){
    set<int> tmp;
    if(i==0) tmp.insert(a[1]);
    int g = gcd(a[i+1], all);
    if(g < all){
      tmp.insert(all);
    }
    for(auto x : S){
      int h = gcd(a[i+1], x);
      tmp.insert(h);
    }
    S = tmp;
    all = g;
  }


  /*
  for(auto x : S){
    cout << x << " ";
  }
  cout << all << endl;
  */


  if(S.empty()){
    cout << all;
  }else{
    cout << *rbegin(S);
  }

  return 0;
}
