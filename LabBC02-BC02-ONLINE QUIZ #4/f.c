#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int start, end;
		scanf("%d%d", &start, &end);

		int sum = 0;
		for (int i = start - 1; i < end; i++)
		{
			sum += arr[i];
		}
		printf("Case #%d: %d\n", t + 1, sum);
	}
	return 0;
}