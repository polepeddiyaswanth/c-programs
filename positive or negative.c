#include<stdio.h>
void main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    
    if(i>0)
    {
        printf("%d is a positive number\n",i);
    }
    else if(i<0)
    {
        printf("%d is a negative number\n",i);
    }
    else
       {
           printf("0 is neither positive or negative");
       }
}