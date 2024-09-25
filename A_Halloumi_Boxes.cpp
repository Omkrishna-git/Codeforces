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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &i : arr) cin >> i;  
    if (k != 1) {
        yes;
    } 
    else {
        if (is_sorted(arr.begin(), arr.end())) {
            yes;
        } else {
            no;
        }
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
