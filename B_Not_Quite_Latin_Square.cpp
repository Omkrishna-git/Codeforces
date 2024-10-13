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
    int cntA = 0;
    int cntB = 0;
    int cntC = 0;
    vector<vector<char>> sq(3, vector<char>(3));
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            cin>>sq[i][j];
            if(sq[i][j] == 'A') cntA++;
            if(sq[i][j] == 'B') cntB++;
            if(sq[i][j] == 'C') cntC++;
        }
    }

    if(cntA != 3) cout<<'A'<<endl;
    else if(cntB != 3) cout<<'B'<<endl;
    else if(cntC != 3) cout<<'C'<<endl;

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