#include <stdio.h>
#include <string.h>

int main()
{
	int A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	if (A * B >= C * D)
	{
		printf("%d", A * B);
	}
	else
	{
		printf("%d", C * D);
	}
	return 0;
}