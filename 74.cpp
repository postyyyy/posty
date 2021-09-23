

#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s1,s2;
   cin>>s1>>s2;
   int l1=s1.length();
   int l2=s2.length();
   
   if(l1!=l2)
   {cout<<"not anagram";
   }
   else
   { sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   int c=0;
   if(s1==s2)
   cout<<"anagram";
   else
   cout<<"no";
   }
   
    return 0;
}
