#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

VI p(32);
vector<P> range(32);
VI ans(32, 0);

int main(){
	int n;
    cin >> n;
    string s="";

    if(n==0){
        cout << 0 << endl;
        return 0;
    }

    int x = 1;
    rep(i,32){
        p[i] = x;
        x *= -2;
    }

    int left=0, right=0;
    rep(i,32){
        // Exception handling to prevent overflow
        if(i==31){
            left = p[i];
        }else if(i%2 == 0){
            right += p[i];
        }else{
            left += p[i];
        }
        range[i] = P(left,right);
    }

    while(n != 0){
        int top;
        rep(i,32){
            int l = range[i].first;
            int r = range[i].second;
            if(l <= n && n <= r){
                top = i;
                break;
            }
        }
        ans[top] = 1;
        n -= p[top];
    }

    bool flag=false;
    rep(i,32){
        int j = 31-i;
        if(ans[j] == 1) flag = true;
        if(flag) cout << ans[j];
    }

    cout << endl;

    // rep(i,32){
    //     cout << range[i].first <<" "<< range[i].second << " ";
    //     cout << p[i] << endl;
    // }

	return 0;
}