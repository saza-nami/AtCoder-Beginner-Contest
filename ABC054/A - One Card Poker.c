#include <stdio.h>
#include <string.h>

int main()
{
	char poker[] = {
			2,
			3,
			4,
			5,
			6,
			7,
			8,
			9,
			10,
			11,
			12,
			13,
			1,
	};
	int A, B;
	int a, b;
	scanf("%d%d", &A, &B);
	for (int i = 0; i < strlen(poker); i++)
	{
		if (A == poker[i])
		{
			a = i;
		}
		if (B == poker[i])
		{
			b = i;
		}
	}
	if (a > b)
	{
		printf("Alice");
	}
	else if (b > a)
	{
		printf("Bob");
	}
	else
	{
		printf("Draw");
	}
	return 0;
}