#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int MOD = 1e9 + 7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

bool isDivisor(int a, int b) {
    return (a % b == 0);
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    map<int,int>mp;

    for(auto &i : arr){
        mp[i]++;
    }

    if(mp.size() == 1) cout<<-1<<endl;
    else{
        int ele = begin(mp)->first;
        int freq = begin(mp)->second;

        // length
        cout<<freq<<" "<<n-freq<<endl;
        // Numbers
        for (int i = 0; i < freq; i++) cout<<ele<<" ";
        cout<<endl;

        mp.erase(ele);

        while(!mp.empty()){
            int ele = begin(mp)->first;
            int freq = begin(mp)->second;
            for (int i = 0; i < freq; i++) cout<<ele<<" ";

            mp.erase(ele);
        }

        cout<<endl;        
    }

}

int32_t main() {
    omkrishna(10);
    
    int T = 1;
    cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}
