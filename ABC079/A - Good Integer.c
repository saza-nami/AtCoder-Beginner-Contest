int main()
{
  int N;
  int ns, nh, nt, no;
  scanf("%d", &N);
  ns = N / 1000;
  nh = (N % 1000) / 100;
  nt = (N % 100) / 10;
  no = N % 10;
  if ((ns == nh && nh == nt) || (nh == nt && nt == no))
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}