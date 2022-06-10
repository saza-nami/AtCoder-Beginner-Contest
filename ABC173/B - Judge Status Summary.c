#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
  int N;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  char *S;

  scanf("%d", &N);

  S = (char *)calloc(N, sizeof(char));

  for (int i = 0; i < N; i++)
  {
    scanf("%s", &S[i]);
    if ((strcmp(S + i, "AC")) == 0)
    {
      a++;
    }
    else if ((strcmp(S + i, "WA")) == 0)
    {
      b++;
    }
    else if ((strcmp(S + i, "TLE")) == 0)
    {
      c++;
    }
    else if ((strcmp(S + i, "RE")) == 0)
    {
      d++;
    }
    else
    {
      ;
    }
  }
  printf("AC x %d\n", a);
  printf("WA x %d\n", b);
  printf("TLE x %d\n", c);
  printf("RE x %d\n", d);

  return 0;
}
