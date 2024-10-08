#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD = 1e9 + 7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    umap<int,int>mp;
    int f1 = 0 ;
    
    for (int i = 0; i < n; ++i) {
        mp[arr[i]]++;
    }

    if(mp.size() == 1){
        yes;
    }
    else if(mp.size() == 2){
        f1 = begin(mp)->second;
        if(f1 == n/2 || f1 == (n+1)/2){
            yes;
            return;
        }
        no;
    }
    else{
        no;
    }
}

int32_t main() {
    omkrishna(10);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
