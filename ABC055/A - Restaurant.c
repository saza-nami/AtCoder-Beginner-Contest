#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	int mon;
	scanf("%d", &N);
	mon = 800 * N - 200 * ((int)(N / 15));
	printf("%d", mon);
	return 0;
}