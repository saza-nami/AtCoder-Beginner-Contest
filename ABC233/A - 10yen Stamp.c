#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int X;
  int Y;
  int result;
  scanf("%d", &X);
  scanf("%d", &Y);
  if ((result = Y - X) > 0)
  {
    if ((Y - X) % 10)
    {
      printf("%d", result / 10 + 1);
    }
    else
    {
      printf("%d", result / 10);
    }
  }
  else
  {
    printf("0");
  }
  return 0;
}