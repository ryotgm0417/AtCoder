#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int main(){
	int a,b,c;
    cin >> a >> b >> c;

    if(a==b && a==c){
        cout << "No" << endl;
    }else if(a!=b && b!=c && c!=a){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

	return 0;
}