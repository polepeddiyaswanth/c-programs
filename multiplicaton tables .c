#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
programme:    
    printf("enter an number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        printf("%d*%d=%d \n",i,j,i*j);
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
