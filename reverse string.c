#include <stdio.h>
#include <string.h>
void strrev(char str[])
{
  int n = strlen(str);
  for (int i = 0; i < n/2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}
int main()  
{
  char str[1000];  
  printf("enter the string:\n");
  scanf("%s", str);
  strrev(str);
  printf("\nString After Reverse: %s", str);
  return 0;
}
