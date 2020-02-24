#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using P = pair<int, int>;

int Rs = 200001;
VI C(Rs, 0);

int main(){
    int k,n;
    cin >> n >> k;
    rep(i,n){
        int a;
        cin >> a;
        C[a]++;
    }

    sort(C.begin(), C.end());
    int uniq = 0;
    rep(i,Rs){
        if(C[i] > 0) uniq++;
        // if(i < 100) cout << C[i] << " ";
    }
    int ans=0;
    int cnt = uniq - k;
    rep(i,Rs){
        if(cnt <= 0){
            break;
        }else if(C[i] > 0){
            ans += C[i];
            cnt--;
        }else{
            continue;
        }
    }

    cout << ans << endl;

    return 0;
}