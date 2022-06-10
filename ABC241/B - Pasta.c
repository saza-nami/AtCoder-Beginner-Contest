#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int N = 0;
  int M = 0;
  int A[1001];
  int B[1001];
  int i, j;
  int ate = 0;
  scanf("%d %d ", &N, &M);
  for (i = 0; i < N; i++)
  {
    scanf("%d ", &A[i]);
  }
  for (i = 0; i < M; i++)
  {
    scanf("%d ", &B[i]);
  }
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j++)
    {
      if (B[i] == A[j])
      {
        A[j] = 0;
        ate++;
        break;
      }
    }
  }
  if (M == ate)
    printf("Yes");
  else
    printf("No");
  return 0;
}