int main()
{
  int X, t = 0;
  scanf("%d%d", &X, &t);
  if (t >= X)
  {
    printf("0");
  }
  else
  {
    printf("%d", X - t);
  }
  return 0;
}
