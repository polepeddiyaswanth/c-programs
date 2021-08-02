#include<stdio.h>
 void main()
{
    int i,n,a=0,b=1,c;

    printf("enter number of terms:");
    scanf("%d",&n);

    printf("firsrt %d fibonacci series are:",n);
    for(i=0;i<n,i++)
    {
        if(i<=1)
        c=i;
       else
           {
               c=a+b;
               a=b;
               b=c;
           }
           printf("%d ",c);
          
        
    }
}