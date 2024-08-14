#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end()) // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        map<int, char> mp;
        bool ok = true;

        if (s.size() != n) {
            cout << "NO" << endl;
            continue;
        }
        
        for (int j = 0; j < n; ++j) {
            if (mp.find(arr[j]) != mp.end()) {
                if (mp[arr[j]] != s[j]) {
                    ok = false;
                    break;
                }
            } else {
                mp[arr[j]] = s[j];
            }
        }
        
        set<char> st;
        for (auto &p : mp) {
            st.insert(p.second);
        }
        
        if (ok && st.size() == mp.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
