#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the rows");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("input valid specified");
    }
    else if(n>100)
    {
        printf("input valid specified");
    }
    else{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    }
}


// OUTPUT:5

// *
// **
// ***
// ****
// *****