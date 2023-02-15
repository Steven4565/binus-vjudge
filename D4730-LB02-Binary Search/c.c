#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int n;

int search(long long *arr, int l, int r, long long x)
{
	if (r >= l)
	{
		int m = l + (r - l) / 2;

		if (arr[m] > x)
			return search(arr, l, m - 1, x); // look to the left
		else if (arr[m] <= x)							 // might be valid?
		{
			if (m == n - 1 || arr[m + 1] > x) // check if it's the **only** valid int
				return m;
			else															 // there's still valid values to the right
				return search(arr, m + 1, r, x); // look to the right
		}
	}
	return -1;
}

int main()
{
	scanf("%d", &n);

	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i]);
	}

	long long sum[n];
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			sum[0] = arr[i];
			continue;
		}

		sum[i] = arr[i] + sum[i - 1];
	}

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		long long q;
		scanf("%lld", &q);

		int res = search(sum, 0, n - 1, q);
		if (res == -1)
			res = -2;
		printf("Case #%d: %d\n", t + 1, res + 1);
	}

	return 0;
}