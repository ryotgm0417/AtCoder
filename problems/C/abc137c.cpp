#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n){
    string x;
    cin >> x;
    sort(x.begin(), x.end());
    s[i] = x;
  }

  sort(s.begin(), s.end());

  ll ans=0, cons=0;
  string t=s[0];
  rep(i,n-1){
    if(s[i+1] == t){
      cons++;
    }else{
      ans += cons*(cons+1)/2;
      cons = 0;
      t = s[i+1];
    }
  }

  if(cons>0){
    ans += cons*(cons+1)/2;
  }

  cout << ans;

  return 0;
}
