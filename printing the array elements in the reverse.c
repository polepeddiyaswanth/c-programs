#include <stdio.h>
int main()
{
    int i,a[100],n;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nthe array elements in reverse:");
    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}