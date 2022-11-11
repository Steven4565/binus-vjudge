#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j || n - i - 1 == j)
					printf("*");
				else
					printf(" ");
			}
			puts("");
		}

		puts("");
	}

	return 0;
}