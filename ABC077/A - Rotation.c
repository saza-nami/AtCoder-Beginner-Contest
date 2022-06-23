int main()
{
  char C[2][3];
  for (int i = 0; i < 2; i++)
  {
    scanf("%s", &C[i]);
  }
  if (C[0][0] == C[1][2] && C[0][1] == C[1][1] && C[0][2] == C[1][0])
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}