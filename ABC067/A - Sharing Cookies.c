int main()
{
  int A, B = 0;
  scanf("%d%d", &A, &B);
  if (!((A + B) % 3) || !(A % 3) || !(B % 3))
  {
    printf("Possible");
  }
  else
  {
    printf("Impossible");
  }
  return 0;
}