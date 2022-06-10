#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  if ((b - a) == 1 || (a == 1 && b == 10))
    printf("Yes");
  else
    printf("No");
}