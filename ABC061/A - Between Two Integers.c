int main()
{
  int A, B, C = 0;
  scanf("%d%d%d", &A, &B, &C);
  if (C >= A && C <= B)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}