#include<stdio.h>
int main()
{
    int i,j,n,a,number[30];
    char ch;
programme:    
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the numbers");
     for(i=0;i<n;++i)    
    scanf("%d",&number[i]);
    
    for(i=0;i<n;++i)
    {
       for(j=i+1;j<n;++j)
      {
          if(number[i]>number[j])
         {
          a=number[i];
          number[i]=number[j];
          number[j]=a;
      } 
    }
}
printf("the ascending order of the numbers is \n");
for(i=0;i<n;++i)
    printf("%d ", number[i]);
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
