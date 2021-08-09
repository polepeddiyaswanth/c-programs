#include<stdio.h>
int main ()
{
  int i, j, n,  array1[30], array2[30], count = 0,ch;
  printf ("enter the value");
  scanf ("%d", &n);
  printf ("enter the first array elements\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &array1[i]);
  printf ("enter the second array elements\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &array2[i]);
do{
    printf("\n1.to print the programme.\n2.to exit the programme.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:    
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (array1[i] == array2[j])
	    {
	      count++;
	      break;
	    }
	}

    }
  if (count == n) 
    {
      printf ("arrays are same");
    }
  else
    {
      printf (" arrays are not same");
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


