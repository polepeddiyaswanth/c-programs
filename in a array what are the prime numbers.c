#include<stdio.h>
int main()
{
    int n,i,j,a[100],flag,ch;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    do{
    printf("1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
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
    break;
    case 2:
    printf("bye bye");
    break;
    default:
    printf("choose correct option");
    break;
    }
    }
    while(ch !=2);
    return 0;
    
    

}
