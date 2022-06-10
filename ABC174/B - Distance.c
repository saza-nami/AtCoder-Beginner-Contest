#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  long int N, D;
  scanf("%ld %ld", &N, &D);
  long int X[200000];
  long int Y[200000];
  int cnt = 0;
  for (int i = 0; i < N; i++)
  {
    scanf("%ld %ld", X + i, Y + i);
  }
  D = D * D;
  for (int i = 0; i < N; i++)
  {
    X[i] = X[i] * X[i];
    Y[i] = Y[i] * Y[i];

    if (D >= (X[i] + Y[i]))
    {
      cnt++;
    }
  }
  printf("%d", cnt);
  return 0;
}