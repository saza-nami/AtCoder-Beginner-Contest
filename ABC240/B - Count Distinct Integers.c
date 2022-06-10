#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int N = 0;
  int a[1001];
  int i, j;
  int n = 0;
  int cnt = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", &a[i]);
    for (j = 0; j < i; j++)
    {
      if (a[j] == a[i])
        n++;
    }
    if (!n)
    {
      cnt++;
    }
    n = 0;
  }
  printf("%d", cnt);
}