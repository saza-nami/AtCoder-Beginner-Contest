#include <stdio.h>

int main()
{
	int m, n, o, p, q;
	scanf("%d %d %d %d %d", &m, &n, &o, &p, &q);
	for (int i = 1; i <= 5; i++)
	{
		switch (i)
		{
		case 1:
			if (m == 0)
				printf("%d", i);
			break;
		case 2:
			if (n == 0)
				printf("%d", i);
			break;
		case 3:
			if (o == 0)
				printf("%d", i);
			break;
		case 4:
			if (p == 0)
				printf("%d", i);
			break;
		case 5:
			if (q == 0)
				printf("%d", i);
			break;
		}
	}
}