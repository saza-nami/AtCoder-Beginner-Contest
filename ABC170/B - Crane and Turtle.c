#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int m, n, flag = 0;
  scanf("%d %d", &m, &n);
  for (int i = 0; i <= m; i++)
  {
    int a, b, c;
    a = (m - i) * 2;
    b = i * 4;
    c = a + b;
    if (c == n)
    {
      flag = 1;
      printf("Yes");
      break;
    }
  }
  if (!flag)
  {
    printf("No");
  }
}