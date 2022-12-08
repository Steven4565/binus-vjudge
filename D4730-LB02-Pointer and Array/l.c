#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int arr[n], indices[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &indices[i]);
		}

		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			arr[indices[i]] = buffer;
		}

		for (int i = 0; i < n; i++)
		{
			printf("%d", arr[i]);
			if (i != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}