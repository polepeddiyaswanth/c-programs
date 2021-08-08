#include<stdio.h>
void main()
{
    int i,j,n,a[100];
    printf("enter the value:");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}