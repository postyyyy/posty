#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map <int,int>m;
  for(int i=0;i<n;i++)
  { m[a[i]]=m[a[i]]+1;
      
  }
  for(auto it=m.begin();it!=m.end();it++)
  {
      if(it->second>1)
      cout<<it->first<<endl;
  }
  
return 0;
}