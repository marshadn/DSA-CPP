#include <stdio.h>
#include <string.h>
int main()
{
  char s1[10], s2[10];

  printf("enter the first string:");
  gets(s1);
  printf("\nenter the second string:");
  gets(s2);

  int x, y;
  x = strlen(s1);
  y = strlen(s2);

  printf("\nThe length of s1 is:%d", x);
  scanf("%d", &x);
  printf("\nThe length of s2 is:%d", y);
  scanf("%d", &y);

  if (strcmp(s1, s2) == 0)
  {
    printf("\nBoth strings are equal");
  }
  else
    printf("\nBoth strings are not equal");
  strcat(s1, s2);
  printf("\nThe concatanated string is%s", s1);
  strcpy(s1, s2);
  printf("\nThe copied string is%s", s1);

  return 0;
}