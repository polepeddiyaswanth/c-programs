#include<stdio.h>
int main()
{
    int i,j,n,small,large,number[30];
    char ch;
programme:    
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the numbers");
     for(i=0;i<n;++i)    
    scanf("%d",&number[i]);
    small=number[0];
    large=number[0];
    
    for(i=1;i<n;++i)
    {
          if(number[i]<small)
         {
             small=number[i];
         }
          if(number[i]>large)
         {
             large=number[i];
         }
          
       
    
}
printf("small=%d large=%d",small,large);

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

