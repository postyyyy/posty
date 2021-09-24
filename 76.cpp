

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
 int hole,value;
 for(int i=1;i<n;i++)
 { 
     value=a[i];
     hole=i;
     while(hole>0&&a[hole-1]>value)
     {
         
             a[hole]=a[hole-1];
             hole=hole-1;
         }
         a[hole]=value;
     }
 
  for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   } 
       
   
    return 0;
}