#include<stdio.h>
int main()
{
    int i,j,n,a,number[30],ch;
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the numbers");
     for(i=0;i<n;++i)    
    scanf("%d",&number[i]);
    do{
    printf("\n1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
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
