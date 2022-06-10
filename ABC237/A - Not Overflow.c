#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  long long N;
  int i, flag;
  long long b = 1;
  scanf("%lld", &N);
  for (i = 0; i < 31; i++)
  {
    b = b * 2;
  }
  if ((N < b) && (N >= ((-1) * b)))
    printf("Yes");
  else
    printf("No");
  return 0;
}