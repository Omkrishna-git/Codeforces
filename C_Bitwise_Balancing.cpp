#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD = 1e9+7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

map<tuple<int, int, int>, int> mp;

void initialize_map() {
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 0;
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;
}

void solve() {
    int b, c, d;
    cin >> b >> c >> d;
    int a = 0;

    for (int i = 60; i >= 0; i--) {
        int B = (((1LL << i) & b) != 0);
        int C = (((1LL << i) & c) != 0);
        int D = (((1LL << i) & d) != 0);

        int x = mp[{B, C, D}];

        if (x == -1) {
            a = -1;
            break;
        } else {
            a += x * (1LL << i);
        }
    }
    cout << a << endl;
}

int32_t main() {
    omkrishna(10);
    initialize_map();  

    int T;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}
