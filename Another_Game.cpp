#include "bits/stdc++.h"
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

void solve1() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (auto& i : p) cin >> i;

    int maxi = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            maxi = max(maxi, max(p[i], i + 1));
        }
    }

    cout << maxi + (maxi - 1) << endl;


}


void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    if (is_sorted(arr.begin(), arr.end())) {
        cout << 0 << endl;
        return;
    }
    
    int max_sum = INT_MAX; 
    int cnt = n;
    int ans = arr[n - 1];
    int prev = arr[n - 2];
    int final_sum = 0;
    
    for (int i = n - 1; i > 0; --i) {
        if (arr[i] != cnt) {
            ans = arr[i];
            prev = arr[i - 1];
            swap(ans,prev);
            final_sum = ans + prev;
            max_sum = min(max_sum, final_sum); 
        } else {
            cnt--;
        }
    }
    
    cout << max_sum << endl;
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
