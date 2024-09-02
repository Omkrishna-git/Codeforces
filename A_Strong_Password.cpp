#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
       string s;
       cin>>s;
       int n=s.length();
       if(n==1){
        if(s[0]=='a'){
            s+='b';
            cout<<s<<endl;
        }
        else{
            s+='a';
            cout<<s<<endl;
        }
        continue;
       }
       bool got=false;
       int index=-1;
       for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            got=true;
            index=i;
            break;
        }
       }
       if(got){
        string ans="";
        for(int i=0;i<=index;i++){
            ans+=s[i];
        }
        if(s[index]=='a'){
            ans+='b';
        }
        else{
            ans+='a';
        }
        for(int i=index+1;i<n;i++){
            ans+=s[i];
        }
        cout<<ans<<endl;

       }
       else{
        if(s[0]=='a'){
            s='b'+s;
            cout<<s<<endl;
        }
        else{
            s='a'+s;
            cout<<s<<endl;
        }
       }
	    
	    
	}
    return 0;

}
