#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    
    char str[max];
    int alphs,digits,i,ch;
    alphs=digits=i=0;
    printf("enter an string");
    fgets(str,max,stdin);
    do{
    printf("1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
         {
            alphs++;
         }
        else if(str[i]>='0' && str[i]<='9')
        {
          digits++;
    
        }        
    }
    
    printf("in the string the alphabets are:%d\n",alphs);
    printf("in the string the digits are:%d\n",digits);
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

