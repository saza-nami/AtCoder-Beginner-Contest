int main()
{
  int h[3];
  int w[3];
  int i, j, k, l = 0;
  int hw[3][3];
  int count = 0;
  for (i = 0; i < 3; i++)
  {
    scanf("%d", &h[i]);
  }
  for (i = 0; i < 3; i++)
  {
    scanf("%d", &w[i]);
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      hw[i][j] = 0;
    }
  }
  for (i = 1; (i < w[0] - 1) && (i < h[0] - 1); i++)
  {
    hw[0][0] = i;
    for (j = 1; j < (h[0] - hw[0][0]); j++)
    {
      hw[0][1] = j;
      hw[0][2] = h[0] - hw[0][0] - j;
      for (k = 1; k < (w[0] - hw[0][0]); k++)
      {
        hw[1][0] = k;
        hw[2][0] = w[0] - hw[0][0] - k;
        for (l = 1; (l < w[1] - hw[0][1]) && (l < h[1] - hw[1][0]); l++)
        {
          hw[1][1] = l;
          hw[2][1] = w[1] - (hw[0][1] + hw[1][1]);
          hw[1][2] = h[1] - (hw[1][0] + hw[1][1]);
          if ((w[2] - hw[0][2] - hw[1][2]) > 0)
          {
            if ((h[2] - hw[2][0] - hw[2][1]) > 0)
            {
              if ((w[2] - hw[0][2] - hw[1][2]) == (h[2] - hw[2][0] - hw[2][1]))
              {
                hw[2][2] = h[2] - (hw[2][0] + hw[2][1]);
                count++;
              }
            }
          }
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}