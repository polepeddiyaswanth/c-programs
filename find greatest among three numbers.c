#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("enter the three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if((n1>n2)&&(n1>n3))
    printf("n1 is greatest number");
    else if((n2>n1)&&(n2>n3))
    printf("n2 is greatest number");
    else
    printf("n3 is greatest number");
}