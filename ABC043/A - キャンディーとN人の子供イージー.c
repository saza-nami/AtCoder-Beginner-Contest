#include <stdio.h>
#include <string.h>

int main()
{
  int N;
  int Candy = 0;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++)
  {
    Candy += i;
  }
  printf("%d", Candy);
  return 0;
}