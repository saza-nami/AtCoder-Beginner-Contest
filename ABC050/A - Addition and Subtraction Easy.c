#include <stdio.h>
#include <string.h>

int main()
{
	int A, B;
	char op[2];
	int res = 0;
	scanf("%d%s%d", &A, &op, &B);
	if (op[0] == '+')
	{
		res = A + B;
		printf("%d", res);
	}
	else if (op[0] == '-')
	{
		res = A - B;
		printf("%d", A - B);
	}
	return 0;
}