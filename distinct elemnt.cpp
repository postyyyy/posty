#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {  
        ll n,x;
        cin>>n>>x;
       ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        set <ll>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
    ll ans=s.size();
        ll y=min(ans,n-x);
        cout<<y<<endl;
        
    }

	
	return 0;
}
