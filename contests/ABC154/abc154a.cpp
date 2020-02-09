#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	string s,t,u;
    int a,b;
    cin >> s >> t >> a >> b >> u;
    if(u==s) a--;
    else b--;
    cout << a << " " << b << endl;
	return 0;
}