

#include <bits/stdc++.h>

using namespace std;

int main()
{  int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
   int r,ch;
   for( r=1;r<n;r++)
   {
       for(int i=0;i<=n-1-r;i++)
       {
           if(a[i]>a[i+1])
           {  
           ch=a[i];
           a[i]=a[i+1];
           a[i+1]=ch;
               
           }
       }
   }
      for(int i=0;i<n;i++)
   {
    cout<<a[i];
   } 
       
   
    return 0;
}
