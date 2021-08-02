#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of first %d natural numbers is:%d",n,sum);
}