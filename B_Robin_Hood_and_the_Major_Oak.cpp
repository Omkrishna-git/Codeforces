#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define no cout << "NO" << endl
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
    int n, k;
    cin >> n >> k;

    int first_year  = n - k + 1;
    if (first_year  < 1) first_year  = 1;

    int ans = (n * (n + 1)) / 2 - ((first_year  - 1) * first_year ) / 2;

    if (ans % 2 == 0) yes;
    else  no;
    
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
