#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int N = 0;
  int x[100000];

  unsigned long int M = 0;
  double E = 0;
  double u = 0;
  unsigned long int C = 0;

  int i;

  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", x + i);
  }

  for (int i = 0; i < N; i++)
  {
    M = M + abs(x[i]);
  }

  for (int i = 0; i < N; i++)
  {
    E = x[i];
    E = E * E;
    u = u + E;
  }
  u = sqrtl(u);

  C = abs(x[0]);

  for (int i = 1; i < N; i++)
  {
    if (C < abs(x[i]))
    {
      C = abs(x[i]);
    }
  }

  printf("%15ld\n", M);
  printf("%.15f\n", u);
  printf("%15ld\n", C);
  return 0;
}