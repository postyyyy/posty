#include <iostream>
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
    int arrf[10]={0};
    for(int i=0;i<n;i++)
    {
        int k;
        k=a[i];
        arrf[k]++;
    }
for(int i=0;i<10;i++)
{
    if(arrf[i]>1)
    cout<<i;
}
return 0;
}