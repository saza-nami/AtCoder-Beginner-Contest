#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int a[10];
  int buf = 0;
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    scanf("%d ", &a[i]);
  }
  for (i = 0; i < 3; i++)
  {
    buf = a[buf];
  }
  printf("%d", buf);
  return 0;
}