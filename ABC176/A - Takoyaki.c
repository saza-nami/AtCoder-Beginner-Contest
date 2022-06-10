#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int N, X, T;
  scanf("%d", &N);
  scanf("%d", &X);
  scanf("%d", &T);

  if (N % X != 0)
  {
    N = N / X;
    N = N + 1;
  }
  else
  {
    N = N / X;
  }
  N = N * T;

  printf("%d", N);

  return 0;
}