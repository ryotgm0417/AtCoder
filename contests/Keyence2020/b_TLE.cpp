#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;


int main(){
  int n;
  cin >> n;
  VI x(n),l(n),m(n),M(n);
  rep(i,n){
    cin >> x[i] >> l[i];
    m[i] = x[i] - l[i];
    M[i] = x[i] + l[i];
  }

  vector<pair<int, int>> hit;
  VI num(n);

  bool is_hit=false;
  int num_del = 0;

  rep(i,n){
    rep(j,i){
      if( (m[i]<m[j] && m[j]<M[i]) || (m[i]<M[j] && M[j]<M[i])){
        hit.push_back(make_pair(i,j));
        num[i]++;
        num[j]++;
        is_hit = true;
      }
    }
  }

  while(is_hit){
    num_del++;

    int max=0,ele;
    rep(i,n){
      if( num[i] > max ){
        max = num[i];
        ele = i;
      }
    }

    num[ele] = 0;

    rep(i,hit.size()){
      if(hit[i].first==ele){
        num.at(hit[i].second)--;
        hit[i].first = -1;
        hit[i].second = -1;
      }else if(hit[i].second==ele){
        num.at(hit[i].first)--;
        hit[i].first = -1;
        hit[i].second = -1;
      }
    }

    bool is_hit = false;
    rep(i,n){
      if(num[i] > 0){
        is_hit = true;
        break;
      }
    }
  }

  cout << (n-num_del) << endl;

  return 0;
}
