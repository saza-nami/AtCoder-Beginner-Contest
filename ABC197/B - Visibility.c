#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
  int H, W;
  int i, j;
  int m, n;
  int count = 0;
  char S[101][101];
  // printf("HW入力\n");
  scanf("%d%d%d%d", &H, &W, &i, &j);

  // printf("マス入力\n");
  for (m = 0; m < H; m++)
  {
    scanf("%s", S[m]);
  }

  /*for (m = 0; m < H; m++)
  {
    printf("%s", S[m]);
    printf("\n");
  }*/

  for (m = (i - 1); m >= 0; m--)
  {
    if (S[m][j - 1] != '#')
    {
      count++;
    }
    else
      break;
  }
  for (m = (i - 1); m < H; m++)
  {
    if (S[m][j - 1] != '#')
    {
      count++;
      if (m == i - 1)
        count = count - 1;
    }
    else
      break;
  }
  for (n = (j - 1); n >= 0; n--)
  {
    if (S[i - 1][n] != '#')
    {
      count++;
      if (n == j - 1)
        count = count - 1;
    }
    else
      break;
  }
  for (n = (j - 1); n < W; n++)
  {
    if (S[i - 1][n] != '#')
    {
      count++;
      if (n == j - 1)
        count = count - 1;
    }
    else
      break;
  }
  if (H == 0 && W == 0)
    count = 0;
  printf("%d", count);
  return 0;
}