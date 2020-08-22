#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

int ei[4] = {-1,0,1,0};
int ej[4] = {0,-1,0,1};

int main(){
  int h,w;
  cin >> h >> w;
  string s[h];
  rep(i,h) cin >> s[i];

  int ans=0;

  rep(si,h){
    rep(sj,w){
      if(s[si][sj]=='#') continue;

      vector<vector<int>> dist(h, vector<int>(w, 100));

      queue<pair<int,int>> q;

      auto update = [&](int i, int j, int x){
        if(dist[i][j] != 100) return;

        dist[i][j] = x;
        q.push(pair<int,int>(i,j));
      };

      update(si, sj, 0);

      while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        rep(k,4){
          int ni = i+ei[k], nj = j+ej[k];
          if(ni<0 || ni>=h || nj<0 || nj>=w) continue;
          if(s[ni][nj]=='#') continue;
          update(ni, nj, dist[i][j]+1);
        }
      }

      rep(i,h){
        rep(j,w){
          if(dist[i][j] == 100) continue;
          if(dist[i][j] > ans) ans = dist[i][j];
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
