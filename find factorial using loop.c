#include<stdio.h>
void main()
{
    int n,t,r=1;
    printf("enter any integer number:");
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
    r=r*t;
    }
    printf("the factorial of given number is:%d",r);
}