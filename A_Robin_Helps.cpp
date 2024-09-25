
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto& i : arr) cin >> i;

    int totalGiven = 0;
    int robinGold = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= k) {
            robinGold += arr[i];
        } else if (arr[i] == 0 && robinGold > 0) {
            robinGold--;
            totalGiven++;
        }
    }

    cout << totalGiven << endl;
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

