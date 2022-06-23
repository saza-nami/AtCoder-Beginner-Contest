int main()
{
  int x, a, b = 0;
  scanf("%d%d%d", &x, &a, &b);
  if (abs(x - a) < abs(x - b))
  {
    printf("A");
  }
  else
  {
    printf("B");
  }
  return 0;
}