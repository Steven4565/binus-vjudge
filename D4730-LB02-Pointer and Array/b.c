#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);
	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int needed[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &needed[i]);
		}

		int has[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &has[i]);
		}

		printf("Case #%d: ", t + 1);

		for (int i = 0; i < n; i++)
		{
			printf("%d", needed[i] - has[i]);
			if (i != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}