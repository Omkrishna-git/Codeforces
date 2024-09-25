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
    int n, k;
    std::cin >> n >> k;
    
    int sum = n * (k + k + n - 1) / 2;
    int ans = sum;
    
    int lo = 0, hi = n;
    while (lo < hi) {
        int x = (lo + hi + 1) / 2;
        int s = x * (k + k + x - 1) / 2;
        if (s <= sum - s) {
            lo = x;
        } else {
            hi = x - 1;
        }
    }
    for (auto x : {lo, lo + 1}) {
        if (x > n) {
            continue;
        }
        int s = x * (k + k + x - 1) / 2;
        ans = std::min(ans, std::abs(s - (sum - s)));
    }
    std::cout << ans << "\n";
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