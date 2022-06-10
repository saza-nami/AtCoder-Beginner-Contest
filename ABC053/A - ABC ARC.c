#include <stdio.h>
#include <string.h>

int main()
{
	int rate;
	scanf("%d", &rate);
	if (rate >= 1200)
	{
		printf("ARC");
	}
	else
	{
		printf("ABC");
	}
	return 0;
}