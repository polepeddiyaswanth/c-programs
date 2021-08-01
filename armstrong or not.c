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
         sum=sum+(r*r*r);
         n=n/10;
         
     }
     if(t==sum)
     {
         printf("%d is armstrong\n",t);
     }
       else
       {
           printf("%d is not an armstrong\n",t);
       }
}