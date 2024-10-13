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

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> sieve_fun(int m) {
    vector<bool> sieve(m + 1, true);
    sieve[0] = sieve[1] = false;
    vector<int> primes;
    
    for (int i = 2; i * i <= m; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= m; j += i) {
                sieve[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= m; i++) {
        if (sieve[i]) primes.push_back(i);
    }
    return primes;
}

void solve(const vector<int>& primes) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    int idx = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = primes[idx];
            idx = (idx + 1) % primes.size();
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int32_t main(){

    omkrishna(10);

    int T;
    cin >> T;

    const int m = 1e6;
    vector<int> primes = sieve_fun(m);
    
    while (T--) {
        solve(primes);
    }

    return 0;
}