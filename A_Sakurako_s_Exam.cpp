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

void solve(){
    int a, b;
    cin >> a >> b;

    if(a== 0){
        if(b%2 != 0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
    if(b==0 ) {
        if(a%2 != 0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

    if(b%2 == 0){
        if(a%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(a%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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
