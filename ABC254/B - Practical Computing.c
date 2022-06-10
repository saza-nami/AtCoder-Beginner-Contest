int main()
{
  int N = 0;
  int A[31];
  int a[31];
  int i, j = 0;
  int out = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    A[i] = 0;
  }
  for (i = 0; i < N; i++)
  {
    for (j = 0; j <= i; j++)
    {
      if (A[j] == 0)
      {
        A[j] = 1;
      }
      else if (A[j] != 0 && j != 0)
      {
        A[j] += a[j - 1];
      }
      printf("%d ", A[j]);
    }
    for (j = 0; j <= i; j++)
    {
      a[j] = A[j];
    }
    printf("\n");
  }
  return 0;
}