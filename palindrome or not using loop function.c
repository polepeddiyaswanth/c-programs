#include<stdio.h>
void main()
{
    int n,t,r,sum=0;
    printf("enter any integer:\n");
    scanf("%d",&n);
    t=n;
        while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
     }

if(t==sum)
printf("%d is palindrome",t);
else
printf("%d is not palindrome",t);
}