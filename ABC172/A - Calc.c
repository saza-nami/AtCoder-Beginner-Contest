#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a;
  scanf("%d", &a);
  int b = a * a;
  int c = a * a * a;
  int d = a + b + c;
  printf("%d", d);
  return 0;
}