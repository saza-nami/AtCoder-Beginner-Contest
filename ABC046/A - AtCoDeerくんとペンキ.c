#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, c = 0;
	int cnt = 1;
	scanf("%d%d%d", &a, &b, &c);
	if (b != a)
		cnt += 1;
	if (c != a && c != b)
		cnt += 1;
	printf("%d", cnt);
	return 0;
}