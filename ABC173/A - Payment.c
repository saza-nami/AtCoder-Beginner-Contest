#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
  int N;
  scanf("%d", &N);
  N = 1000 - (N % 1000);
  if ((N % 1000) == 0)
  {
    N = 0;
  }
  printf("%d", N);
  return 0;
}