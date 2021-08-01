#include<stdio.h>
int factorial(int);
int main()
{
    int n,i;
    printf("enter any integer:\n");
    scanf("%d",&n);
    i=factorial(n);
    printf("the factorial of %d is:%d",n,i);

}

 int factorial(int n)
 {
     if(n==0)
       return 1;
       else
          return n*factorial(n-1);
 }