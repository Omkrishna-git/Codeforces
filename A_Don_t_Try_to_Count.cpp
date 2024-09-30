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

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int count = 0;

    for (int i = 0; i <= 5; i++) {
        if (x.find(s) != string::npos) {
            cout << count << endl;
            return;
        }
        x.append(x);
        count++;

    }

    cout << -1 << endl;
}



int32_t main(){

    omkrishna(10);
    
    int T = 1;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}