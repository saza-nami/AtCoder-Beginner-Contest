int main()
{
  char S1[11];
  char S2[11];
  char S3[11];
  scanf("%s%s%s", &S1, &S2, &S3);
  printf("%c%c%c", toupper(S1[0]), toupper(S2[0]), toupper(S3[0]));
  return 0;
}