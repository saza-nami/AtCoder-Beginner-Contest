int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ((c - b) == (b - a))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}