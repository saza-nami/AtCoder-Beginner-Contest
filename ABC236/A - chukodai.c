#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
  char S[10];
  char tmp;
  int a = 0;
  int b = 0;
  scanf("%s", &S);
  scanf("%d %d", &a, &b);
  tmp = S[a - 1];
  S[a - 1] = S[b - 1];
  S[b - 1] = tmp;
  printf("%s", S);
  return 0;
}