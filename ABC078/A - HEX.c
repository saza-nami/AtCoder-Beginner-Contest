int hex(char n);

int main()
{
  char x, y;
  int X, Y;
  scanf("%c %c", &x, &y);
  X = hex(x);
  Y = hex(y);
  if (X == Y)
  {
    printf("=");
  }
  else if (X < Y)
  {
    printf("<");
  }
  else if (X > Y)
  {
    printf(">");
  }
}

int hex(char n)
{
  int m = 0;
  if (n == 'A')
  {
    m = 0xA;
  }
  else if (n == 'B')
  {
    m = 0xB;
  }
  else if (n == 'C')
  {
    m = 0xC;
  }
  else if (n == 'D')
  {
    m = 0xD;
  }
  else if (n == 'E')
  {
    m = 0xE;
  }
  else if (n == 'F')
  {
    m = 0xF;
  }
  return m;
}