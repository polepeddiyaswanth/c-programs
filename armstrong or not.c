#include<stdio.h>
void main()
{
    int n,t,r,sum=0;
    
    printf("enter any integer:\n");
    scanf("%d",&n);
     for(i=0;n!=0;n=n/10)
     {
         r=n%10;
         sum=sum+(r*r*r);
         
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