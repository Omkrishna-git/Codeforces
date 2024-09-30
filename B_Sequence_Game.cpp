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
    int n ;
    cin>>n;

    vector<int>brr(n);
    for(int i = 0 ; i < n ; ++i) cin>>brr[i];

    vector<int>arr;
    arr.push_back(brr[0]);

    if(n==1){
        cout<<1<<endl;
        cout<<arr[0]<<endl;
        return;
    }

    for(int i = 1 ; i < n ; ++i){
        int ele = brr[i];
        if(brr[i-1] > brr[i]){
            arr.push_back(ele);
        }
        arr.push_back(ele);
    }

    cout<<arr.size()<<endl;
    for(int i = 0 ; i < arr.size() ; ++i) cout<<arr[i]<<" ";

    cout<<endl;


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