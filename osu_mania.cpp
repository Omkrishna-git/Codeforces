
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
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(4));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            char c;
            cin >> c;
            if (c == '#') {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < 4; ++j) {
            if (arr[i][j] == 1) {
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
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

