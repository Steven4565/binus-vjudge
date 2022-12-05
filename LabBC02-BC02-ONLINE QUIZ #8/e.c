#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int n;
		char str[1000];

		scanf("%d %[^\n]%*c", &n, str);
		printf("%c%c\n", str[n - 1], str[0]);
	}

	return 0;
}