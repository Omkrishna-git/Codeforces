#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD=1e9+7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    int mini = INT_MAX;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        mini = min(mini,abs(arr[i]));
    }

    cout<<mini<<endl;
}

int32_t main(){

    omkrishna(10);
    
    int T = 1;
    // cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}