#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!

void solve(){
    int n;
   cin>>n;
 
   string s = to_string(n);
   if(s[0]!='1' || s[1]!='0' || s[2]=='0') {
        cout<<"NO\n";
        return;
   }
 
    int pow = 0;
    for(int i=2;i<s.size();i++){
        pow = pow*10 + (s[i]-'0');
    }
 
    if(pow<2) {
        cout<<"NO\n";
        return;
    }
 
    cout<<"YES\n";

}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    