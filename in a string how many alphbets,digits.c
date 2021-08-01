#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    
    char str[max];
    int alphs,digits,i;
    alphs=digits=i=0;
    char ch;
programme:
    printf("enter an string");
    fgets(str,max,stdin);
    
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
    printf("in the string the digits are:%d",digits);
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

