#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

// (頻度,値)を降順に保管するvector<pair<int,int>>を返す
// 最頻値は ret[0].second、その頻度は ret[0].first
// sortを使っているので実行時間は要素数 N として O(NlogN)
// 値渡しなので引数の v は変更されない

vector<P> mode(VI v){
    sort(v.begin(), v.end());
    vector<P> ret;
    rep(i,v.size()){
        if(ret.empty() || ret.back().second != v[i]){
            P p;
            p.first = 1;
            p.second = v[i];
            ret.push_back(p);
        }else{
            ret.back().first++;
        }
    }
    sort(ret.begin(), ret.end(), greater<P>());
    return ret;
}


////////////////////////////////

int main(){
    VI v = {
        1,1,
        4,4,4,
        3,3,3,3,
        2,2,2,
        5,5,
        6
    };

    vector<P> out = mode(v);

    cout << "Original:" << endl;
    rep(i,v.size()){
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Output:" << endl;
    rep(i,out.size()){
        cout << "(" << out[i].first << "," << out[i].second << ") ";
    }
    cout << endl;

	return 0;
}