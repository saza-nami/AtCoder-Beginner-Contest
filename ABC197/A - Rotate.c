#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
  char S[256];
  char s;
  scanf("%s", S);

  for (int i = 0; i < 3; i++)
  {
    s = S[i];
    if (i)
    {
      S[i] = S[2];
      S[2] = s;
    }
    else
    {
      S[i] = S[i + 1];
      S[i + 1] = s;
    }
  }

  printf("%s", S);
  return 0;
}