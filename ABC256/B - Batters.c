int main()
{
  int N;
  int A[101];
  char y[4] = {'x', 'x', 'x', 'x'};
  int i, j = 0;
  int P = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
    y[0] = 'o';
    for (j = 3; j >= 0; j--)
    {
      if (y[j] == 'o' && (j + A[i]) >= 4)
      {
        P++;
        y[j] = 'x';
      }
      else if (y[j] == 'o' && (j + A[i]) < 4)
      {
        y[j + A[i]] = 'o';
        y[j] = 'x';
      }
    }
  }
  printf("%d", P);
  return 0;
}