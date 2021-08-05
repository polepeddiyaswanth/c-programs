#include<stdio.h>
int main()
{
   int i,j,n1,n2,disp[100][100],ch,sum,x,row,col,flag=0,m1,m2,a,c,k;
  char var;
   printf("enter the value of rows:");
   scanf("%d",&n1);
   printf("enter the value of coloumns:");
       scanf("%d",&n2);
   for(i=0; i<n1; i++) 
   {
      for(j=0;j<n2;j++) 
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   programme:
   printf("\nDo you want to print:\n1:index value\n2:matrix\n3.sum of all elements\n4.enter the number in the matrix it will show position\n5.if you want to replace any element in matrix\n6.if you want to count the number how many times repeated\n7.to write the matrix in ascending order.\n8.to write the matrix in descending order.\n");
    scanf (" %d", &ch);
    switch(ch)
    {
    case 1:
            printf("enter the row:");
          scanf("%d", &i);
          printf("enter the coloumn:");
          scanf("%d",&j);
         printf("the value of the index is %d",disp[i][j]);
           break;
    case 2:
           printf("\nTwo Dimensional array elements:\n");
   for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", disp[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
   } 
           break;
     case 3:
        for(i=0;i<n1;i++)
          for(j=0;j<n2;j++)
               sum=sum+disp[i][j];
     printf("\nSum of All Elements in Matrix = %d",sum);
       break;
     case 4:
         printf("Enter the search element:\n");
         scanf("%d",&x);
   
     for(i=0;i<n1;i++)
       {
          for(j=0;j<n2;j++)
        {
            if(disp[i][j]==x)
        {
            flag=1;
            row=i;
            col=j;
        }
        }
    }
    if(flag==1)
        printf("Position of Search Element %d is (%d, %d)",x,row,col);
    else
        printf("Given Search Element is not found....");
        break;
    case 5:
        printf("enter the number which want to replace:");
        scanf("%d",&m1);
        printf("enter the new number");
        scanf("%d",&m2);
          for(i=0; i<n1; i++) 
         {
          for(j=0;j<n2;j++) 
        {
        if(disp[i][j]==m1)
            disp[i][j]=m2;
      }
   }
   printf("after replacing the elements in matrix:\n");
    for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", disp[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
   }     
      break;
     case 6:
     printf("what is the value you want to count:");
     scanf("%d",&a);
     for(i=0; i<n1; i++)
       {
      for(j=0;j<n2;j++) 
          {
          if(disp[i][j]==a)
           c++;
            }
   }
      printf("count=%d",c);
      break;
     case 7:
     printf("after ascending order\n");
for (i = 0; i < n1; ++i)
    {
        for (j = 0; j < n2; ++j)
        {
            for (k =(j + 1); k < n2; ++k)
            {
                if (disp[i][j] > disp[i][k])
                {
                    a = disp[i][j];
                    disp[i][j] = disp[i][k];
                    disp[i][k] = a;
                }
            }
        }
    }
          for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", disp[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
   }     
      break;
     case 8:
      printf("after descending order:\n");
      for (i = 0; i < n1; ++i)
    {
        for (j = 0; j < n2; ++j)
        {
            for (k =(j + 1); k < n2; ++k)
            {
                if (disp[i][j] < disp[k][j])
                {
                    a = disp[i][j];
                    disp[i][j] = disp[i][k];
                    disp[i][k] = a;
                }
            }
        }
    }
    for(i=0; i<n1; i++)
   {
      for(j=0;j<n2;j++) 
      {
         printf("%d ", disp[i][j]);
         if(j==n2-1)
         {
            printf("\n");
         }
      }
   }     
      break;
    default:
          printf("pls enter 1 or 2");
    }
    loop:
    printf ("\nDo you want to repeat the programme(Y/N): ");
    scanf (" %c", &var);

    if(var == 'Y' || var=='y')
    {
        goto programme;
    }
    else if( var == 'N' || var=='n')
    {
        return 0;
    }
    else
    {
        printf("Please enter Yes or NO.\n");
        goto loop;
    }
    

}