#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
  int n,m;
  cin >> n >> m;
  VI x(n);
  rep(i,n) cin >> x[i];

  sort(x.begin(), x.end());

  vector<P> y(n);
  rep(i,n){
    y[i].first = x[i] % m;
    y[i].second = 0;
  }

  bool flag=false;
  int id=1, tmp=-1;
  rep(i,n){
    if(flag){
      if(x[i] == tmp){
        y[i].second = id;
      }else{
        flag = false;
        id++;
      }
    }else{
      if(x[i] == tmp){
        flag = true;
        y[i-1].second = id;
        y[i].second = id;
      }
      tmp = x[i];
    }
  }
  if(flag) id++;

  VVI table(m, VI(1,0));
  VI recent_id(m,0);
  rep(i,n){
    int j = y[i].first;
    if(y[i].second == 0){
      table[j][0]++;
    }else if(y[i].second == recent_id[j]){
      table[j].back()++;
    }else{
      table[j].push_back(1);
      recent_id[j] = y[i].second;
    }
  }

  int ans = 0;

  if(table[0][0] > 0){
    int t = table[0][0] / 2;
    ans += t;
    table[0][0] -= t*2;
  }
  if(table[0][0] > 0){
    rep2(i,1,table[0].size()){
      if(table[0][i] % 2 == 1){
        table[0][0]--;
        table[0][i]--;
        ans++;
      }
    }
  }

  if(m%2==0){
    int k = m/2;
    if(table[k][0] > 0){
      int t = table[k][0] / 2;
      ans += t;
      table[k][0] -= t*2;
    }
    if(table[k][0] > 0){
      rep2(i,1,table[k].size()){
        if(table[k][i] % 2 == 1){
          table[k][0]--;
          table[k][i]--;
          ans++;
        }
      }
    }
  }

  rep2(i,1,m/2){
    int k = m - i;
    // calc
  }

  //同じカードのペア数を数える

  /*
  rep(i,m){
    rep(j,table[i].size()){
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
  */

  cout << ans;

  return 0;
}
