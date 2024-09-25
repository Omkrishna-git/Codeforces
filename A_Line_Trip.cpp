#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define no cout << "No" << endl
#define yes cout << "YES" << endl

int MOD=1e9+7;

int omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

void solve(){
    int n , x ;
    cin>>n>>x;

    int arr[n];
    for(int i = 0 ; i < n ; ++i) cin>>arr[i];

    int maxi = arr[0];
    for(int i = 1 ; i < n ; ++i){
        int diff = arr[i] - arr[i-1];
        maxi = max(maxi,diff);
    }

    int end_diff = x - arr[n-1];
    maxi = max(maxi, 2 * end_diff);

    cout<<maxi<<endl;

}

int32_t main(){

    omkrishna(10);
    
    int T = 1;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}