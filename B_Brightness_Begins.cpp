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

void solve(){
    int n;
    cin>>n;

    int left = 0 ; 
    int right = 4e18;
    int answer = 4e18;

    while(left <= right){
        int mid = (left+right)>>1;
        int onBulb = mid - (int)sqrtl(mid);

        if(onBulb < n){
            left = mid + 1;
        }
        else{
            answer = mid ;
            right = mid - 1;
        }
    }

    cout<<answer<<endl;

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