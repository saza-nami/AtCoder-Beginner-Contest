#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);
  A = A * A;
  B = B * B;
  C = C * C;
  if (C > (A + B))
    printf("Yes");
  else
    printf("No");
  return 0;
}