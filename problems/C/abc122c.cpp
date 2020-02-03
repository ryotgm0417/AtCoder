#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;

int main(){
  int n,q;
  cin >> n >> q;
  string s;
  cin >> s;
  VI l(q), r(q);
  rep(i,q) cin >> l[i] >> r[i];

  VI v;
  bool a = false;
  rep(i,n){
    if(a && s[i]=='C') v.push_back(i);
    if(s[i] == 'A'){
      a = true;
    }else{
      a = false;
    }
  }

  rep(i,q){
    int L = l[i] - 1;
    int R = r[i] - 1;
    VI::iterator left,right;
    left = lower_bound(v.begin(), v.end(), L+1);
    right = upper_bound(v.begin(), v.end(), R);
    cout << (right-left) << endl;
  }

  return 0;
}
