#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long

int MOD = 1e9 + 7;

int opt(int precision) {
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

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    string s;
    cin >> s;

    s = "#" + s; 

    vector<int> ans(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        if (ans[i] == -1) {
            int j = i;
            int cnt = 0;

            if (s[j] == '0') {
                cnt++;
            }

            j = p[j];

            while (j != i) {
                if (s[j] == '0') {
                    cnt++;
                }
                j = p[j];
            }

            ans[i] = cnt;

            j = p[i];

            while (j != i) {
                ans[j] = cnt;
                j = p[j];
            }
        }
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    opt(10);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
