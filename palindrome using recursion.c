#include<stdio.h>
int palindrome(int n)
{
    static int sum=0,r;
     
        if(n!=0)
     {
         r=n%10;
         sum=sum*10+r;
         palindrome(n/10);
     }
     return sum;
}
     int main()
     {
     int sum,n;
     printf("enter any integer");
     scanf("%d",&n);
     sum=palindrome(n);
     if(sum==n)
     {
         printf("%d is palindrome",n);
     }
     else
     {
         printf("%d is not a palindrome",n);
     }
     return 0;
}
