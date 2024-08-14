#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    set<int> seat;
    for (int i = 0; i < n; i++) {
        if (i > 0 && seat.find(arr[i] - 1) == seat.end() && seat.find(arr[i] + 1) == seat.end()) 
        {
            cout << "NO" << endl;
            return;
        }
        seat.insert(arr[i]);
    }
    cout << "YES" << endl;
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    