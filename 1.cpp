#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin >> n1>>n2;

    int i,r,c=0;
    for(i=n1;i<=n2;i++)
    {  
          bool arr[10] = {false};
          int num=i;
      while(num>0)
      { 
          r=num%10;
          if(arr[r])
          {break;}
          arr[r]=true;
          num=num/10;
      }
           if(num==0)
           c=c+1;
         

    }
   if(c>0)
    cout<<c;
else
cout<<"no"; 


    return 0;
}