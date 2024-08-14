#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))                  // sort 
#define mxe(v) *max_element(all(v))          // find max element in vector
#define mne(v) *min_element(all(v))          // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(all(v)))) // make sure to sort before applying unique 
#define bin(x,y) bitset<y>(x)

const int MOD = 1e9+7;

void modadd(int &a, int b) { a = (a%MOD + b%MOD) % MOD; }
void modsub(int &a, int b) { a = (a%MOD - b%MOD + MOD) % MOD; }
void modmul(int &a, int b) { a = (a%MOD * b%MOD) % MOD; }

// Input/Output overloads for pairs and vectors
template<typename T, typename U> istream &operator>>(istream &in, pair<T, U> &a) { return in >> a.first >> a.second; }
template<typename T> istream &operator>>(istream &in, vector<T> &a) { for (auto &x : a) in >> x; return in; }
template<typename T, typename U> ostream &operator<<(ostream &out, const pair<T, U> &a) { return out << a.first << ' ' << a.second; }
template<typename T, typename U> ostream &operator<<(ostream &out, const vector<pair<T, U>> &a) { for (const auto &x : a) out << x << '\n'; return out; }
template<typename T> ostream &operator<<(ostream &out, const vector<T> &a) { for (size_t i = 0; i < a.size(); i++) out << (i ? " " : "") << a[i]; return out; }


vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 
                      101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

bool check_prime(int z) {
    return find(primes.begin(), primes.end(), z) != primes.end();
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi v(n);
        for (auto &i : v) cin >> i;
        
        unordered_map<int, int> index_map; 
        bool found = false;

        for (int i = 0; i < n && !found; i++) {
            for (auto &k : index_map) {
                if (!check_prime(v[i] + k.first)) {
                    cout << k.second + 1 << " " << i + 1 << endl;
                    found = true;
                    break;
                }
            }
            index_map[v[i]] = i; 
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
