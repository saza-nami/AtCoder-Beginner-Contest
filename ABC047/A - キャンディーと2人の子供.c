#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, c = 0;
	int big;
	scanf("%d%d%d", &a, &b, &c);
	if ((a == b + c) || (b == a + c) || (c == a + b))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}