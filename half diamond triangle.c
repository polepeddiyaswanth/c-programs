#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
programme:
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
    loop:
    printf ("\nDo you want to repeat the programme(Y/N): ");
    scanf (" %c", &ch);

    if(ch == 'Y' || ch=='y')
    {
        goto programme;
    }
    else if( ch == 'N' || ch=='n')
    {
        return 0;
    }
    else
    {
        printf("\nPlease enter Yes or NO.\n");
        goto loop;
    }
        
    }
    return 0;
}


output:4

*
**
***
****
***
**
*