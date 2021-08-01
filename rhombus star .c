#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    /* m=space,l=stars */
    char ch;
    programme:
    printf("how many rows:");
    scanf("%d",&n);
    m=n-1;
    l=1;
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
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
        for(k=1;k<=l;k++)
        
        {
            printf("*");
        }
           if(m>i)
           {
               m--;
               l=l+2;
           }
           if(m<i)
           {
               m++;
               l=l-2;
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
}
