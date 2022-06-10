#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int H, W = 0;
  int i, j;
  int x, y = 0;
  int cnt = 0;
  char S[101][101];
  scanf("%d%d", &H, &W);
  for (i = 0; i < H; i++)
  {
    scanf("%s", &S[i]);
  }
  for (i = 0; i < H; i++)
  {
    for (j = 0; j < W; j++)
    {
      if (S[i][j] == 'o' && !cnt)
      {
        x = i;
        y = j;
        cnt++;
      }
      else if (S[i][j] == 'o' && cnt)
      {
        x = abs(x - i);
        y = abs(y - j);
        cnt = 0;
        break;
      }
    }
  }
  printf("%d", x + y);
  return 0;
}