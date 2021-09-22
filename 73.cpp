#include <bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;

int l1, l2;
l1=s1.length();
l2=s2.length();
//cout<<l1<<l2;
int ans=0;
for(int i=0;i<l2;i++)
{
    int r=s2.find(s1[i]);
    if(r>0)
    ans++;
}
cout<<ans;
return 0;
}
