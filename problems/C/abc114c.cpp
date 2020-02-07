#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

VI v;

bool check(int n){
    bool t=false, f=false, s=false;
    int d;
    for(int i=8;i>=0;i--){
        d = n / pow(10,i);
        n -= d*pow(10,i);
        if(d==3) t=true;
        if(d==5) f=true;
        if(d==7) s=true;
    }
    return (t && f && s);
}

void generate(int x, int d){
    if(d >= 9) return;
    int a[] = {3,5,7};
    rep(i,3){
        int y = x + a[i]*pow(10,d);
        if(check(y)) v.push_back(y);
        generate(y, d+1);
    }
}

int main(){
  int n;
  cin >> n;

  generate(0, 0);
  sort(v.begin(), v.end());

  int ans = upper_bound(v.begin(), v.end(), n) - v.begin();
  cout << ans << endl;
  
  return 0;
}