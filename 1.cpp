#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long

int MOD=1e9+7;

int desperate_optimization(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

long long myPower(int base, int exp, long long mod = 1000000007) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }

    return result;
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

void solve(){

}

int32_t main(){

    desperate_optimization(10);
    
    int T;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}