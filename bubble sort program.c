#include<stdio.h>
void main()
{
    int n,i,j,a[100],temp;
    printf("enter the range of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the array elements are:");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nafter sorting the array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}