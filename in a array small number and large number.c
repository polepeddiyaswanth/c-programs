#include<stdio.h>
int main()
{
    int i,j,n,small,large,number[30],ch;
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the numbers");
     for(i=0;i<n;++i)    
    scanf("%d",&number[i]);
    do{
    printf("1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
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
    break;
    case 2:
    printf("bye bye");
    break;
    default:
    printf("choose correct option");
    break;
   }
   }while(ch!=2);
   return 0;
}    

