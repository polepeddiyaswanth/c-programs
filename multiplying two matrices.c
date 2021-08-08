#include<stdio.h>
void main()
{
    int i,j,k,n1,n2,a[100][100],a2[100][100],mul[100][100];
   printf("enter the value of rows:");
   scanf("%d",&n1);
   printf("enter the value of coloumns:");
       scanf("%d",&n2);
   for(i=0; i<n1; i++) 
   {
      for(j=0;j<n2;j++) 
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
   printf("second matrix\n");
   printf("enter the value of rows:");
   scanf("%d",&n1);
   printf("enter the value of coloumns:");
       scanf("%d",&n2);
   for(i=0; i<n1; i++) 
   {
      for(j=0;j<n2;j++) 
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a2[i][j]);
      }
   }
   printf("\nTwo Dimensional array elements:\n");
   for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", a[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
  } 
  printf("\nTwo Dimensional array elements:\n");
   for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", a2[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
  } 
    printf("multiply of the matrix=\n");    
for(i=0;i<n1;i++)    
  {    
    for(j=0;j<n2;j++)    
  {    
     mul[i][j]=0;    
    for(k=0;k<n2;k++)    
    {    
        mul[i][j]=a[i][k]*a2[k][j];    
   }    
  }    
 }    
    for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", mul[i][j]);
         {
         if(j==n2-1)
         {
            printf("\n");
         }
         }
      }
  } 
}  