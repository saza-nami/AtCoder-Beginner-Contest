int main()
{
  int N = 0;
  scanf("%d", &N);
  if ((N / 100) == (N % 10))
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}