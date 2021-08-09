#include<stdio.h>
int main ()
{
  int i, j, n1,n2,array[100][100],transpose[100][100],ch;
  printf("enter the value of rows:");
   scanf("%d",&n1);
   printf("enter the value of coloumns:");
       scanf("%d",&n2);
   for(i=0; i<n1; i++) 
   {
      for(j=0;j<n2;j++) 
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &array[i][j]);
      }
   }
    do{
    printf("1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
   printf("\nmatrix:\n");
   for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", array[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
   } 
   for (int i = 0; i < n1; ++i)
  for (int j = 0; j < n2; ++j) 
  {
    transpose[j][i] = array[i][j];
  }
   printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < n1; ++i)
  for (int j = 0; j < n2; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == n1 - 1)
    printf("\n");
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
while(ch!=2);
return 0;
    
    
}