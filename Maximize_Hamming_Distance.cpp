#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long

int MOD=1e9+7;

int desperate_optimization(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

void solve(){
    int n,m ;
    cin>>n>>m;
    
    vector<vector<char>>ans ;
    
    for(int i = 0 ; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cin>>ans[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cout<<ans[i][j] <<" ";
        }
        cout<<endl;
    }
    
    
}

int32_t main(){

    desperate_optimization(10);
    
    int T;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}