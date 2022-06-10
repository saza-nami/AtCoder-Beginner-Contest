#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int main()
{
  int a, b, c[101], i, d, e, f = 0;
  scanf("%d %d", &a, &b);
  for (i = 0; i < b; i++)
  {
    scanf("%d", &c[i]);
  }
  if (b == 0)
  {
    printf("%d", a);
    return 0;
  }

  qsort(c, b, sizeof(int), compare_int);

  for (i = 0; i < b; i++)
  {
    d = c[i] - a;
    if (i == 0)
    {
      e = d;
      f = i;
    }
    else if (abs(e) > abs(d))
    {
      e = d;
      f = i;
    }
  }

  for (i = 1;; i++)
  {
    if (c[f - i] != c[f] - i)
    {
      printf("%d", c[f] - i);
      break;
    }
    else if (c[f + i] != c[f] + i)
    {
      printf("%d", c[f] + i);
      break;
    }
  }
}