int main()
{
  int A, B, C = 0;
  scanf("%d%d%d", &A, &B, &C);
  if (A == B)
  {
    printf("%d", C);
  }
  else if (B == C)
  {
    printf("%d", A);
  }
  else
  {
    printf("%d", B);
  }
}