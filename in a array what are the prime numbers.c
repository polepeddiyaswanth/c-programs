#include<stdio.h>
int main()
{
    int n,i,j,a[100],flag;
    char ch;
    programme:
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
            flag=0;
            for(j=2;j<a[i];j++)
        {    
        if(a[i]%j== 0)
        {
            flag=1;
             break;
        }
        }
              if(flag==0)
            {
        printf(" %d is prime number \n",a[i]);
            }
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
