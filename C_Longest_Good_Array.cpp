#include <bits/stdc++.h>
using namespace std;

#define int long long

int desperate_optimization(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

void solve() {
    int l, r;
    cin >> l >> r;

    int count = 1;
    int diff = 1;

    while (l + diff <= r) {
        l = l + diff;  
        count++; diff++;
    }

    cout << count << endl;
}

int32_t main() {
    desperate_optimization(10);

    int T;
    cin >> T; 

    while (T--) {
        solve();
    }

    return 0;
}
