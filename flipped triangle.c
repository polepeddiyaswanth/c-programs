#include<stdio.h>
int main()
{
    int n,i,j,k,m,ch;
    printf("how many rows:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("input valid specified");
    }
    else if(n>100)
    {
        printf("input valid specified");
    }
    else
    {
    do{
         printf("1.to print the stars.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-n;k++)
        
        {
            printf("*");
        }
           m++;
        printf("\n");
        
    }
    break;
    case 2:
    printf("bye bye");
    break;
    default:
    printf("choose correct option\n");
    break;
    }
    } 
    
    while(ch!=2);
   return 0;
}
}