#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int a, b, c = 0;
  scanf("%d%d%d", &a, &b, &c);
  if ((b >= a && b <= c) || (b <= a && b >= c))
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}