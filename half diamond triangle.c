#include<stdio.h>
int main()
{
    int n,i,j,ch;
    printf("how many rows");
    scanf("%d",&n);
     if(n<=0)
    {
        printf("input valid specified");
    }
    if(n>100)
    {
        printf("input valid specified");
    }
    else 
    {
    do{
    printf("1.to print the stars.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    
        printf("\n");
    }
    break;
    case 2:
    printf("bye bye");
    break;
    default:
    printf("choose correct option");
    break;
    }
    }
    while(ch!=2);
    return 0;
    }   
}


// output:4

// *
// **
// ***
// ****
// ***
// **
// *