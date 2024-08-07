#include "bits/stdc++.h"
using namespace std;

#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    
    vector<pii> intervals(n);
    fr(i, n) {
        cin >> intervals[i].first >> intervals[i].second;
    }
    
    // Sort intervals by their start time
    srt(intervals);
    
    // Check the initial gap from the start of the day to the first task
    if (intervals[0].first >= s) {
        cout << "YES" << endl;
        return;
    }
    
    // Check gaps between tasks
    bool can_shower = false;
    for (int i = 1; i < n; i++) {
        if (intervals[i].first - intervals[i - 1].second >= s) {
            can_shower = true;
            break;
        }
    }
    
    // Check the final gap from the last task to the end of the day
    if (!can_shower && m - intervals[n - 1].second >= s) {
        can_shower = true;
    }
    
    if (can_shower) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
