#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD=1e9+7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

string solve() {
    int n, k;
    cin >> n >> k;
    string ans;

    vector<int> arr(n);
    int mini = LLONG_MAX;  
    
    if (n == 1) {
        cin >> arr[0];  
        if (arr[0] > k) {
            ans = "NO";
        } else {
            ans = "YES";
        }
        return ans;
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mini = min(mini, arr[i]);
    }

    int totalTrips = 2 * n - 3;

    if (mini * totalTrips <= k) {
        ans = "YES";
    } else {
        ans = "NO";
    }

    return ans;
}

int32_t main(){

    omkrishna(10);

    int t;
    cin>>t;
    
    for(int i = 0 ; i < t ; ++i)
        cout<<"Case #"<<i+1<<":"<<" "<<solve()<<endl;

    return 0;
}