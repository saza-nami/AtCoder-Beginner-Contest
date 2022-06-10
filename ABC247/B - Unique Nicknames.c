#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int N = 0;
  char s[1001][11];
  char t[1001][11];
  int i, j;
  int k = 0;

  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%s%s", s[i], t[i]);
  }

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      if (i != j && (strcmp(s[i], s[j]) == 0))
        k++;
      if (i != j && (strcmp(s[i], t[j]) == 0))
        k++;
      if (i != j && (strcmp(t[i], s[j]) == 0))
        k++;
      if (i != j && (strcmp(t[i], t[j]) == 0))
        k++;
    }
    if (k > 1)
      break;
    k = 0;
  }
  if (k > 1)
  {
    printf("No");
  }
  else
  {
    printf("Yes");
  }
  return 0;
}