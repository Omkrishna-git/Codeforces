#include "bits/stdc++.h"
using namespace std;

#define int long long

int desperate_optimization(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

bool found(int n) {
    int s = sqrt(n);
    return (s * s == n);
}

bool beauti(const string &s, int n) {
    int size = sqrt(n); 
    
    for (int i = 0; i < size; ++i) {
        if (s[i] != '1' || s[n - size + i] != '1') {
            return false;
        }
    }
    

    for (int i = 0; i < size; ++i) {
        if (s[i * size] != '1' || s[(i + 1) * size - 1] != '1') {
            return false;
        }
    }
    
    for (int i = 1; i < size - 1; ++i) {
        for (int j = 1; j < size - 1; ++j) {
            if (s[i * size + j] != '0') {
                return false;
            }
        }
    }
    
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (!found(n)) {
        cout << "No" << endl;
        return;
    }

    if (beauti(s, n)) cout << "Yes" << endl;
    else cout << "No" << endl;

}

int32_t main() {
    desperate_optimization(10);
    
    int T;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}
