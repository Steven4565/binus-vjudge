#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int arr1[n];

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr1[i]);
		}

		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			if (buffer > arr1[i])
			{
				count++;
			}
		}
		printf("Case #%d: %d\n", t + 1, count);
	}

	return 0;
}