#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int X = 0;
  scanf("%d", &X);
  if (X >= 90)
  {
    printf("expert");
  }
  else if (X >= 70)
  {
    printf("%d", 90 - X);
  }
  else if (X >= 40)
  {
    printf("%d", 70 - X);
  }
  else if (X >= 0)
  {
    printf("%d", 40 - X);
  }
  return 0;
}