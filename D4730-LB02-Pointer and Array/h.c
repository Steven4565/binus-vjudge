#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				long long buffer;
				scanf("%lld", &buffer);
				arr[j] += buffer;
			}
		}

		printf("Case #%d: ", t + 1);
		for (int i = 0; i < n; i++)
		{
			printf("%lld", arr[i]);
			if (i != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}