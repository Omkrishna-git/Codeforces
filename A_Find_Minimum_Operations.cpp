#include <bits/stdc++.h>
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

long long myPower(int base, int exp, long long mod = 1000000007) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 != 0) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }

    return result;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int count = 0;

    if (k == 1) {
        cout << n << endl;
        return;
    }

    while (n > 0) {
        count = count + (n % k);
        n = n / k;
    }

    cout << count << endl;
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