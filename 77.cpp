
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
for(int j=0;j<n-1;j++)
{
    int min=j;
    for(int i=j+1;i<n;i++)
    {
        if(a[i]<a[min])
        {
            min=i;
        }
    }
    int temp ;
    temp=a[j];
    a[j]=a[min];
    a[min]=temp;
}
 for(int i=0;i<n;i++)
   {
    cout<<a[i];
   }
    return 0;
}
