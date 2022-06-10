#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  char S1[11];
  char S2[11];
  char S3[11];
  char T[1001];
  int i;

  scanf("%s", S1);
  scanf("%s", S2);
  scanf("%s", S3);
  scanf("%s", T);
  for (i = 0; T[i] != NULL; i++)
  {
    if (T[i] == '1')
    {
      printf("%s", S1);
    }
    else if (T[i] == '2')
    {
      printf("%s", S2);
    }
    else if (T[i] == '3')
    {
      printf("%s", S3);
    }
  }

  return 0;
}