#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


// ===================================END Of the input module ==========================================


void solve(){
    // int n;
    // cin >> n;

    // vector<int> a(n);
    // for (int i = 0; i < n; ++i) 
    //     cin >> a[i];

    // int odd_count = 0;
    // for (int x : a)
    //     if (x % 2 == 1)
    //         ++odd_count;

    // int even_count = n - odd_count;

    // if (odd_count == 0 || even_count == 0) {
    //     cout << 0 << endl;
    //     return;
    // }
 
    // sort(a.begin(), a.end());

    // int result = even_count;
    // for (int j = n - 1; j >= 0; --j) {
    //     if (a[j] % 2 == 0)
    //         continue;
        
    //     int cnt = a[j];
    //     for (int i = 0; i < j; ++i) {
    //         if (a[i] % 2 == 1)
    //             continue;
    //         cnt += a[i];
    //     }

    //     for (int k = j + 1; k < n; ++k) {
    //         if (cnt > a[k]) {
    //             cnt += a[k];
    //         } else {
    //             ++even_count;
    //             break;
    //         }
    //     }
    //     break;
    // }

    // cout << even_count << endl;


    int n;
    cin>>n;

    multiset<int>odd,even;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a%2 == 0) even.insert(a);
        else odd.insert(a);
    }

    if(odd.size() == 0 || even.size() == 0){
        cout<<0<<endl;
        return;
    }

    int ans = even.size();
    int max_odd =* (odd.rbegin());
    for(int i : even){
        if(i < max_odd) max_odd += i;
        else{
            ans++;
            break;
        }
    }
    cout<<ans<<endl;
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

    