#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD=1e9+7;

void om(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
   
    int condiOne = 0, maxOne = 0, sizeOne = 0;
    for(int i = 0; i < n; i += 2) {
        condiOne += arr[i];
        maxOne = max(maxOne, arr[i]);
        sizeOne++;
    }

    int condiTwo = 0, maxTwo = 0, sizeTwo = 0;
    for(int i = 1; i < n; i += 2) {
        condiTwo += arr[i];
        maxTwo = max(maxTwo, arr[i]);
        sizeTwo++;
    }

    int score1 = maxOne + sizeOne;
    int score2 = maxTwo + sizeTwo;

    cout << max(score1, score2) << endl;
}

int32_t main(){

    om(10);
    
    int T = 1;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}