/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void odd(int n)
{
    n=n+1;
    cout<<n<<endl;
}
void even(int n)
{
    n=n-1;
    cout<<n<<endl;
}

int main()
{ 
int i=1;
while(i<11)
{ 
    if(i%2==0)
    even(i);
    else if(i%2==1) 
    odd(i);
    i++;
    
}
    return 0;
}
