int main()
{
  char A[11], B[11], C[11];
  int a, b, c = 0;
  scanf("%s%s%s", &A, &B, &C);
  a = strlen(A);
  b = strlen(B);
  c = strlen(C);
  if (A[a - 1] == B[0] && B[b - 1] == C[0])
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}