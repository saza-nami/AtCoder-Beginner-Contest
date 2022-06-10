#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
  int N = 0;
  int A = 0;
  int B = 0;
  scanf("%d", &N);
  scanf("%d", &A);
  scanf("%d", &B);
  printf("%d", N - A + B);
  return 0;
}