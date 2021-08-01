#include<stdio.h>
int main ()
{
  int i, j, n,  array1[30], array2[30], count = 0;
  char ch;
  programme:
  printf ("enter the value");
  scanf ("%d", &n);
  printf ("enter the first array elements\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &array1[i]);
  printf ("enter the second array elements\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &array2[i]);
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
      printf ("same");
    }
  else
    {
      printf ("not same");
    }
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


