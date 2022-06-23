int main()
{
  int X, A, B = 0;
  scanf("%d%d%d", &X, &A, &B);
  if ((B - A) <= 0)
  {
    printf("delicious");
  }
  else if ((B - A) <= X)
  {
    printf("safe");
  }
  else
  {
    printf("dangerous");
  }
  return 0;
}