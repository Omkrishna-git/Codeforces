#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define no cout << "No" << endl
#define yes cout << "YES" << endl

int MOD=1e9+7;

int omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

void solve(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto str : s){
        mp[str]++;
    }
    if(mp.size()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}
int32_t main(){

    omkrishna(10);
    
    int T = 1;
    //cin >> T; 
    
    while (T--) {
        solve();
    }

    return 0;
}