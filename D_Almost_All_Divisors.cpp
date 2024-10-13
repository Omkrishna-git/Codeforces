#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9+7;

void omkrishna(int precision) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

void solve(){
    int n; cin>>n;
    vector<int>nums(n); 
    for(int i = 0 ; i < n ; ++i) cin>>nums[i];
    sort(nums.begin(),nums.end());
 
    vector<int>divisors;
    int original_num=nums[0]*nums[n-1];
 
    for(int i=2; i*i<=original_num; i++){
        if(original_num%i==0){
            divisors.push_back(i);
            if(i!=original_num/i){
                divisors.push_back(original_num/i);
            }
        }
    }
    
    sort(divisors.begin(),divisors.end());
    if(nums==divisors)
        cout<<original_num<<endl;
    else
        cout<<-1<<endl;
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
