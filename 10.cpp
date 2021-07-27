#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    { cin>>arr[i];

    }
 int s,e;
 for(s=0;s<n;s++)
 { 
     for(e=s;e<n;e++)
     {
         for(i=s;i<=e;i++)
         {
         cout<<arr[i]<<" ";
         }
         cout<<endl;
         
     }
 }



    return 0;
    
}