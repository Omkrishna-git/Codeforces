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
    string s;
    int n;
    cin>>n;
    cin>>s;

    int a = 0;
    int d = 0;

    for(int i = 0 ; i < s.size() ;i++){
        if(s[i] == 'A'){
            a++;
        }
        else if(s[i] =='D'){
            d++;
        }
    }

    if(a==d){
        cout<<"Friendship"<<endl;
        return;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
        return;
    }
    else if(a>d){
        cout<<"Anton"<<endl;
        return;
    }
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    