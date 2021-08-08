 #include<stdio.h>
 #include<math.h>
void main()
{
    int n,rem,sum=0;
    long int i;
    printf("enter the value:");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        rem=n%2;
        sum=sum+rem*pow(2,i);
        n=n/10;
        i++;
    }
   printf("%d ",sum);
    
}