int main()
{
  int A, B = 0;
  scanf("%d%d", &A, &B);
  if ((A + B) < 10)
  {
    printf("%d", A + B);
  }
  else
  {
    printf("error");
  }
  return 0;
}