#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int count = s.length();
        string ans;
        
        if(count > 10) {
            ans += s[0];                       
            ans += to_string(count - 2);       
            ans += s[count - 1];               
            cout << ans << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
