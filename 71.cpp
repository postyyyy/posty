
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{ int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
 set<int>s;
 for(int i=0;i<n;i++)
 {int r;
     r=count(a,a+n,a[i]);
     if(r>1)
    s.insert(a[i]);     

 }
for(auto it=s.begin();it!=s.end();it++)
 cout<<(*it)<<endl;

    return 0;
}