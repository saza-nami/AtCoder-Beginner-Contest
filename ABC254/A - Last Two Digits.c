int main()
{
  int N = 0;
  scanf("%d", &N);
  if ((N % 100) < 10)
  {
    printf("0%d", N % 100);
  }
  else
  {
    printf("%d", N % 100);
  }
  return 0;
}