#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
	int n;
	cin>>n;
	
	while(n--){
	    int arr[16];
	    for(int i = 0 ; i < 16 ; i++){
	        cin>>arr[i];
	    }
        int v[16];

	    for(int i = 0 ; i < 16 ; i++){
	        v[i] = arr[i];
	    }

        sort(v,v+16);
	    

	    map<int ,int>mp;
	    
	   mp[v[15]] = 4;

       mp[v[0]] = 0;

       for (int i = 7; i <= 14; i++)
       {
            mp[v[i]] = 3;
       }
       
       for (int i = 3; i <= 6; i++)
       {
            mp[v[i]] = 2;
       }
       
       for (int i = 1; i <= 2; i++)
       {
            mp[v[i]] = 1;
       }

       for (size_t i = 0; i < 16; i++)
       {
            cout<<mp[arr[i]]<<" ";
       }
    
	}
	

}
