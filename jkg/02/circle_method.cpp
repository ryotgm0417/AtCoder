#include <bits/stdc++.h>
using namespace std;

//---------------------------

const int N = 8;

int main(){
    vector<int> teams;
    for(int i=1; i<=N; i++){
        teams.push_back(i);
    }

    vector<vector<int>> match(N, vector<int>(N-1));

    vector<int> circle(N), tmp(N);
    for(int i=0; i<N; i++){
        circle[i] = teams[i];
    }

    for(int d=0; d<N-1; d++){
        for(int i=0; i<N; i++){
            match[circle[i]-1][d] = circle[N-1-i];
        }

        for(int i=1; i<N-1; i++){
            tmp[i] = circle[i-1];
        }
        tmp[0] = circle[N-2];
        for(int i=0; i<N-1; i++){
            circle[i] = tmp[i];
        }
    }
    
    for(int i=0; i<N; i++){
        cout << "Team" << i+1 << ": ";
        for(int d=0; d<N-1; d++){
            cout << match[i][d] << " ";
        }
        cout << endl;
    }

    return 0;

}