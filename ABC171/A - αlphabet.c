#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  char a;
  scanf("%c", &a);
  if (a >= 65 && a <= 90)
  {
    printf("A");
  }
  else if (a >= 97 && a <= 122)
  {
    printf("a");
  }
  return 0;
}