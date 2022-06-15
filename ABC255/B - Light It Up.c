int main()
{
  int N, K = 0;
  int X[1001];
  int Y[1001];
  int A[1001];
  int L[1001];
  int i, j;
  double xd, yd, dest = 0;
  double res = 80000000001;
  scanf("%d%d", &N, &K);
  for (i = 0; i < K; i++)
  {
    scanf("%d", &A[i]);
  }
  for (i = 0; i < N; i++)
  {
    scanf("%d%d", &X[i], &Y[i]);
    L[i] = 0;
  }
  for (i = 0; i < K; i++)
  {
    L[A[i] - 1] = 1;
  }

  for (i = 0; i < N; i++)
  {
    if (L[i] == 0)
    {
      res = 80000000001;
      xd = 0;
      yd = 0;
      for (j = 0; j < K; j++)
      {
        xd = (double)X[i] - (double)X[A[j] - 1];
        yd = (double)Y[i] - (double)Y[A[j] - 1];
        if (res > xd * xd + yd * yd)
        {
          res = xd * xd + yd * yd;
        }
      }
      if (dest < res)
      {
        dest = res;
      }
    }
  }
  dest = sqrt(dest);
  printf("%.12lf", dest);
  return 0;
}