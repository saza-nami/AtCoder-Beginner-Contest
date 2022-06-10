#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void rev_string(char str[]);

int main()
{
  int L = 0;
  int R = 0;
  int i = 0;
  char S[100001];
  char buf[100001];
  scanf("%d", &L);
  scanf("%d", &R);
  scanf("%s", &S);
  for (i = (L - 1); i < R; i++)
  {
    buf[i - (L - 1)] = S[i];
  }
  buf[i - (L - 1)] = '\0';
  rev_string(buf);
  for (i = (L - 1); i < R; i++)
  {
    S[i] = buf[i - (L - 1)];
  }
  printf("%s", S);
  return 0;
}

void rev_string(char str[])
{
  int i;
  int len = strlen(str);
  for (i = 0; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}