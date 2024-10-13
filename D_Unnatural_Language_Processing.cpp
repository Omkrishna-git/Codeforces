#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define umap unordered_map
#define endl '\n'

int MOD = 1e9 + 7;

void omkrishna(int precision)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int i = 2;

    while (i < n){

        if (i + 1 > n - 1){
            cout << a[i - 2] << a[i - 1] << a[i] << endl;
            return;
        }
        else{

            if (a[i + 1] == 'a' || a[i + 1] == 'e'){
                cout << a[i - 2] << a[i - 1] << ".";
                i += 2;
            }
            else{
                cout << a[i - 2] << a[i - 1] << a[i] << ".";
                i += 3;
            }
        }
    }

    cout << a[i - 2] << a[i - 1] << endl;

}

int32_t main()
{
    omkrishna(10);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
