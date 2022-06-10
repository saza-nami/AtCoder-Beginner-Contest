#include <stdio.h>
#include <string.h>

int main()
{
	char a, b;
	scanf("%s%s", &a, &b);
	if (a == 'H' && b == 'H')
		printf("H");
	else if (a == 'H' && b == 'D')
		printf("D");
	else if (a == 'D' && b == 'H')
		printf("D");
	else if (a == 'D' && b == 'D')
		printf("H");
	return 0;
}