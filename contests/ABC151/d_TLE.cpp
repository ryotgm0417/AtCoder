#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;

vector<int> ri;
vector<int> rj;

vector<int> key1, key2, D;

int in_vecs(int i, int j, vector<int> V, vector<int> W){
  int ans = -1;
  rep(id,V.size()){
    if(V.at(id)==i && V.at(id)==j) ans = id;
  }
  return ans;
}

int calculate_d(int in, int out){
  if(in == out) return 0;
  if( in_vecs(in, out, key1, key2) > -1 ){
    return D.at( in_vecs(in, out, key1, key2) );
  }

  int in_i=ri.at(in), in_j=rj.at(in);

  int neighbor[4];
  neighbor[0] = in_vecs(in_i - 1, in_j, ri, rj);
  neighbor[1] = in_vecs(in_i + 1, in_j, ri, rj);
  neighbor[2] = in_vecs(in_i, in_j - 1, ri, rj);
  neighbor[3] = in_vecs(in_i, in_j + 1, ri, rj);

  int distance[4] = { 100 };
  int min = 100;

  rep(i,4){
    if(neighbor[i] > -1){
      if(in_vecs(neighbor[i], out, key1, key2)==-1){
        distance[i] = calculate_d(neighbor[i], out);
      	key1.push_back(neighbor[i]);
      	key2.push_back(out);
      	D.push_back(distance[i]);
      }else{
        distance[i] = D.at(in_vecs(neighbor[i], out, key1, key2));
      }
    }

    if(distance[i] < min) min = distance[i];
  }

  return min;
}


int main(){
  int h,w;
  cin >> h >> w;

  rep(i,h){
    rep(j,w){
      char s;
      cin >> s;
      if(s=='.'){
        ri.push_back(i);
        rj.push_back(j);
      }
    }
  }

  int max=0;
  rep(k,ri.size()){
    rep(l,ri.size()){
      int d = calculate_d(k,l);
      if(d > max) max = d;
    }
  }

  cout << max << endl;

  return 0;
}
