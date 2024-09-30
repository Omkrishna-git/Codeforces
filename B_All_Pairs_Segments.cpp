#include <bits/stdc++.h>
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
    int n, q;
    cin >> n >> q;
    
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    
    umap<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        int temp = (i + 1) * (n - i) - 1;
        mp[temp]++;
        
        if (i > 0) {
            int temp2 = (n - i) * i;
            mp[temp2] += (v[i] - v[i - 1] - 1);
        }
    }
    
    while (q--) {
        int k;
        cin >> k;
        if (mp.find(k) == mp.end()) {
            cout << 0 << " ";
        } else {
            cout << mp[k] << " ";
        }
    }
    cout << endl;
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
