#include <stdio.h>
#include <string.h>

int main()
{
  int a, b, h = 0;
  int sur = 0;
  scanf("%d%d%d", &a, &b, &h);
  printf("%d", (a + b) * h / 2);
  return 0;
}