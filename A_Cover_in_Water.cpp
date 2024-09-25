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

void solve(){
    int n;
    cin>>n;

    string s ;
    cin>>s;

    int countHash = 0;
    int countDot = 0;
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '#') countHash++;
        if(s[i] == '.') countDot++;
    }

    if(countHash == n){
        cout<<0<<endl;
        return ;
    }

    for(int i = 2 ; i < n ; ++i){
        if(s[i-2] == '.'){
            if(s[i-1] == '.'){
                if(s[i] == '.'){
                    cout<<2<<endl;
                    return;
                }
            }
        }
    }

    cout<<countDot<<endl;
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