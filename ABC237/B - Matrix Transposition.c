#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  unsigned int A[100001];
  int H, W;
  int buf = 0;
  scanf("%d %d", &H, &W);
  for (int i = 0; i < H * W; i++)
  {
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < W; i++)
  {
    buf = i;
    for (int j = 0; j < H; j++)
    {
      printf("%d ", A[buf]);
      buf = buf + W;
    }
    printf("\n");
  }
  return 0;
}