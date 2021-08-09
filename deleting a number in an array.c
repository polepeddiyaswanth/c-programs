#include<stdio.h>
int main()
{
    int i,a[100],n,pos,ch;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    do{
    printf("\n1.if you want to delete any element.\n2.to exit from the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("please enter the position of the value:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    break;
    default:
    printf("choose correct option");
    }
  }while(ch!=2);
  return 0;
}
