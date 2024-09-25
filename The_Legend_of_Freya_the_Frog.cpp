
#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define no cout << "No" << endl
#define yes cout << "YES" << endl
int MOD = 1e9 + 7;

int omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}




void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    if (x == 0 && y == 0) {
        cout << 0 << endl;
    } else {
        int ans = 0;
        while (x > 0 || y > 0) {
            if (x > 0) {
                x -= min(x, k);
                ans++;
            }
            else if (y > 0) {
                y -= min(y, k);
                ans++;
            }
        }
        cout << ans << endl;
    }
}











void solve2() {
    int x, y, k;
    cin >> x >> y >> k;
    
    int xa = (x + k - 1) / k; 
    int ya = (y + k - 1) / k; 
    int ans = max(xa * 2 - 1, ya * 2);

    cout << ans << endl;
}



int32_t main() {
    omkrishna(10);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

