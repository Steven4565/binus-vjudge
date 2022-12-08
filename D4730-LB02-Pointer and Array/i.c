#include <stdio.h>

int main(int argc, char const *argv[])
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
			scanf("%lld", &arr[i]);
		}

		printf("Case #%d: ", t + 1);
		for (int i = n - 1; i >= 0; i--)
		{
			printf("%lld", arr[i]);
			if (i != 0)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}
