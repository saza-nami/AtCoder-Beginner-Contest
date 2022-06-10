#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
  int N = 0;
  int M = 0;
  char S[100001][11];
  char T[100001][11];
  int i = 0;
  int sta = 1;
  scanf("%d %d", &N, &M);
  for (i = 0; i < N; i++)
  {
    scanf("%s", &S[i]);
  }
  for (i = 0; i < M; i++)
  {
    scanf("%s", &T[i]);
  }
  printf("Yes\n");
  for (i = 1; i < N - 1; i++)
  {
    if ((strcmp(S[i], T[sta])) == 0)
    {
      printf("Yes\n");
      sta++;
    }
    else
    {
      printf("No\n");
    }
  }
  printf("Yes\n");
  return 0;
}