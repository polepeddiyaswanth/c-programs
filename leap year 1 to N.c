#include <stdio.h>
int main()
{
	int n, endYear, i;
	printf("Print leap years between two given years \n");
	printf("Enter End year: ");
   	scanf("%d", &n);
	
	printf("Leap years:\n");	
	for(i=1; i <=n; i++)
	{
		if( (0 == i % 4) && (0 != i % 100) || (0 == i % 400) )
		{
			printf("%d is leap year\n", i);
		}
	}
}