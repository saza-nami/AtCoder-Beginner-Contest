int main()
{
  char s[3];
  int cnt = 0;
  for (int i = 0; i < 3; i++)
  {
    scanf("%s", &s[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == '1')
    {
      cnt++;
    }
  }
  printf("%d", cnt);
  return 0;
}