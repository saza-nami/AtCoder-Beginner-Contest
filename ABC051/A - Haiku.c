#include <stdio.h>
#include <string.h>

int main()
{
	char S[20];
	scanf("%s", &S);
	for (int i = 0; i < strlen(S); i++)
	{
		if (S[i] == ',')
		{
			S[i] = ' ';
		}
	}
	printf("%s", S);
	return 0;
}