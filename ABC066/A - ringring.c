int main()
{
  int a, b, c = 0;
  scanf("%d%d%d", &a, &b, &c);
  if (a <= b && a <= c)
  {
    if (b <= c)
    {
      printf("%d", a + b);
    }
    else
    {
      printf("%d", a + c);
    }
  }
  else if (b <= a && b <= c)
  {
    if (a <= c)
    {
      printf("%d", a + b);
    }
    else
    {
      printf("%d", b + c);
    }
  }
  else
  {
    if (a <= b)
    {
      printf("%d", a + c);
    }
    else
    {
      printf("%d", b + c);
    }
  }
  return 0;
}