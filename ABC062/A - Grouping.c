int main()
{
  int x, y = 0;
  scanf("%d%d%d", &x, &y);
  if (x == 4 || x == 6 || x == 9)
  {
    if (y == 6 || y == 9 || y == 11)
    {
      printf("Yes");
    }
  }
  else if (x != 2 && y != 2 && x != 11 && y != 11)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}