int main()
{
  int N = 0;
  scanf("%d", &N);
  if ((N / 10) == 9 || (N % 10) == 9)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}