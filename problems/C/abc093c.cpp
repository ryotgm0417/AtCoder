#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int f(int s, int l){
    int diff = l - s;
    if(diff%2 == 0){
        return diff/2;
    }else{
        return (diff+1)/2 + 1;
    }
}

int main(){
	VI x(3);
    cin >> x[0] >> x[1] >> x[2];

    sort(x.begin(), x.end());
    int o1,o2,o3;
    int a=x[0], b=x[1], c=x[2];

    o1 = (b-a) + (c-a);
    o2 = f(a,b) + (c-b);
    o3 = f(a,c) + f(b,c);

    cout << min({o1,o2,o3}) << endl;

	return 0;
}