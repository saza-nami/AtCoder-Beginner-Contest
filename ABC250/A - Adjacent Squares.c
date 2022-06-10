#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int H, W, R, C;
  int A = 4;
  scanf("%d%d%d%d", &H, &W, &R, &C);
  if (R == 1 || R == H)
  {
    A = A - 1;
  }
  if (C == 1 || C == W)
  {
    A = A - 1;
  }
  if (H == 1)
  {
    A = A - 1;
  }
  if (W == 1)
  {
    A = A - 1;
  }
  printf("%d", A);
  return 0;
}