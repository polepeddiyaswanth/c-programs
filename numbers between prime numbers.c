#include<stdio.h>
main()
{
    int n1,n2,i,j,flag=0;
    printf("enter the range between prime numbers:");
    scanf("%d %d",&n1,&n2);
    printf("the first %d to %d prime numbers are:",n1,n2);
    
    for(i=n1+1; i<=n2; i++)
    {
        flag=0;
        for(j=1; j<=i; j++)
          {
              if(i%j ==0)
              {
              flag++;
              }
          }
       
       if(flag ==2)
       {
           printf("%d ",i);
       }
    }
}

