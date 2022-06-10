#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int main(void)
{
  int N, K, m = 0;
  int p[1001];
  scanf("%d %d", &N, &K);
  for (int i = 0; i < N; i++)
  {
    scanf("%d", p + i);
  }

  qsort(p, N, sizeof(int), compare_int);
  for (int i = 0; i < K; i++)
  {

    m = m + p[i];
  }
  printf("%d", m);
  return 0;
}