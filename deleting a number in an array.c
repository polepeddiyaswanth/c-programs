#include<stdio.h>
int main()
{
    int i,a[100],n,pos,ch;
    char var;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nif you want to delete any element:press 1.");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    programme:
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
    loop:
    printf ("\nDo you want to repeat the programme(Y/N): ");
    scanf (" %c", &var);

    if(var == 'Y' || var=='y')
    {
        goto programme;
    }
    else if( var == 'N' || var=='n')
    {
        return 0;
    }
    else
    {
        printf("Please enter Yes or NO.\n");
        goto loop;
    }
}
