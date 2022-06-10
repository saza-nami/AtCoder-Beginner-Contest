#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
  int N = 0;
  int A[400000];
  int i = 0;
  int bufN = 0;
  int bufA = 0;
  scanf("%d", &N);
  for (i = 0; i < (4 * N) - 1; i++)
  {
    scanf("%d", &A[i]);
    bufN = bufN + A[i];
  }
  for (i = N; i > 0; i--)
  {
    bufA = bufA + 4 * i;
  }
  printf("%d", bufA - bufN);
  return 0;
}