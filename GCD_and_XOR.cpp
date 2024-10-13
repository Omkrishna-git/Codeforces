#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl '\n'

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

vector<bool> sieve_fun(int n) {
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

vector<bool> Prime;
vector<int> spf;

void sieve(int s) {
    Prime.resize(s + 1, true);
    spf.resize(s + 1);
    Prime[0] = Prime[1] = false;
    for (int i = 2; i <= s; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= s; i++) {
        if (Prime[i]) {
            for (int j = i * i; j <= s; j += i) {
                Prime[j] = false;
                spf[j] = min(spf[j], i);
            }
        }
    }
}

bool isPrime(int n) {
    if (n < Prime.size()) {
        return Prime[n];
    }
    return false;
}

void printPrimes(int s) {
    for (int i = 2; i <= s; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

long long myPower(int base, int exp, long long mod = 1000000007) {
    long long ans = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp & 1) {
            ans = (ans * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }

    return ans;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    printPrimes(100);
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
