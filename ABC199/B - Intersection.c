#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int N;
  int A[101];
  int B[101];
  int bufA = 0;
  int bufB = 0;
  int i;
  int count = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
    if (bufA < A[i])
      bufA = A[i];
  }
  for (i = 0; i < N; i++)
  {
    scanf("%d", &B[i]);
    if (bufB > B[i])
      bufB = B[i];
    if (!i)
      bufB = B[i];
  }
  if (bufA <= bufB)
  {
    count = bufB - bufA + 1;
  }
  printf("%d", count);
  return 0;
}
