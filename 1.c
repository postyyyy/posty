#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("ENTER A NUMBER:");
scanf("%d",&a);
if(a%2==0&&a%3==0)
{
    printf("number is multiple of both 2 and 3");
}
else if(a%2==0)
{
    printf("number is multiple of 2");
}
else if(a%3==0)
{
    printf("number is multiple of 3");
}
else
{printf("netheier 3 nor 2");
}
getch();
}

