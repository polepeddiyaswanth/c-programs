#include<stdio.h>
int main()
{
    int i,j,k,a[100],n,pos,ch,x,index=-1,m1,m2;
    char var;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    programme:
    printf("\n1.insert an element.\n2.to delete the element\n3.sorting the array into ascending array.\n4.sortng the array into descending order.\n5.replace a number by using index value.\n6.replacing new number by number.\n7.reading new array elements.\n8.delete by index.\n9.delete by number\n10.insert a value through index.\n11.finding the duplicate elements.\n12.deleting the duplicate elements.\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
    printf("enter new element:");
     scanf("%d",&m2);
    for(i=n-1;i<=n;i++)
    {
        a[i+1]=a[i];
        a[n]=m2;
    }
     for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<=n;i++)
    {
    printf("%d",a[i]);
    }
    break;
     case 2:
     printf("after deleting the element");
     for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
   }
    break;
     case 3:
     printf("after ascending order\n");
for (i = 0; i < n; ++i)
    {
        for (j = i+1; j < n; ++j)
        {
                if (a[i] > a[j])
                {
                    x = a[i];
                    a[i] = a[j];
                    a[j] = x;
                }
        }
    }
          for(i=0; i<n; i++)
   {
         printf("%d ", a[i]);
   }     
      break;
      case 4:
      printf("after descending order\n");
for (i = 0; i < n; ++i)
    {
        for (j = i+1; j < n; ++j)
        {
                if (a[i] < a[j])
                {
                    x = a[i];
                    a[i] = a[j];
                    a[j] = x;
                }
        }
    }
          for(i=0; i<n; i++)
   {
         printf("%d ", a[i]);
   }     
      break;
     
     case 5:
     printf("please enter the position of the value to replace:");
    scanf("%d",&pos);
    printf("enter the new number:");
    scanf("%d",&m2);
    for(i=0;i<n;i++)
    {
        a[pos]=m2;
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    break;
    case 6:
    printf("enter the number which want to replace:");
        scanf("%d",&m1);
        printf("enter the new number");
        scanf("%d",&m2);
          for(i=0; i<n; i++)
        {
        if(a[i]==m1)
            a[i]=m2;
      
   }
   printf("after replacing the elements in matrix:\n");
    for(i=0; i<n; i++)
   {
         printf("%d ", a[i]);
         
   }     
      break;
    case 7:
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    break;
    case 8:
    printf("please enter the position of the value:");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    break;
    case 9:
    printf("enter the number to delete:");
    scanf("%d",&x);
    for(i = 0; i <n; i++)
    {
        if(a[i] == x)
        {
            index = i;
            
        }
    }

    if(index != -1)
    {
        for(i = index; i < n-1; i++)
            a[i] = a[i+1];

        printf("New Array : ");
        for(i = 0; i < n-1; i++)
            printf("%d ",a[i]);
    }
    else
        printf("Element Not Found\n");
break;
case 10:
printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that position:");
   scanf("%d",&m2);
   for(i=n-1;i>=pos-1;i--)
      a[i+1]=a[i];
   a[pos-1]= m2;
   printf("final array after inserting the value is\n");
   for(i=0;i<=n;i++)
      printf("%d",a[i]);
      break;
 case 11:
  printf("Duplicate elements in given array: \n");    
    for( i = 0; i < n; i++) {    
        for( j = i + 1; j < n; j++) {    
            if(a[i] == a[j])
            
                printf("%d\n", a[j]);    
        }    
    }    
     break;
     case 12:
     for( i = 0; i < n; i++) 
     {    
        for( j = i + 1; j < n; j++) 
        {    
            if(a[i] == a[j])
            {
     for(k=j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
        }
        }
     }
     
                 for(i=0;i<n;i++)
      printf("%d",a[i]);
                 break;
    default:
    printf("choose correct option");
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
