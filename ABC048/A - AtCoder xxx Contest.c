#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	char b[101];
	char c[101];
	scanf("%s%s%s", &a, &b, &c);
	printf("%c%c%c", a[0], b[0], c[0]);
	return 0;
}