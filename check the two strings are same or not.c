#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100];
    char str2[100];
    int value,i;
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
  for(i=0;str1[i]==str2[i] && str1[i]== '\0';i++);
    if(str1[i]==str2[i])
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }
    
}
