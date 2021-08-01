#include<stdio.h>
void main()
{
    int n,count,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(count=1;count<=n;count++)
    {
        sum=sum+count;
    }
    printf("the sum of first %d natural numbers is:%d",n,sum);
}