int main()
{
  int r, g, b = 0;
  scanf("%d%d%d", &r, &g, &b);
  if (!((g * 10 + b) % 4))
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}