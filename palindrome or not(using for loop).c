#include<stdio.h>
void main()
{
    int n,t,r,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    
    for(t=n;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum*10+r;
    }
   if(t==sum)
   printf("%d is palindrome",t);
   else
   printf("%d is not palindrome",t);
}