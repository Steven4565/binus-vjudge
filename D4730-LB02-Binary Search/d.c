#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		long long q;
		scanf("%d%lld", &n, &q);

		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &arr[i]);
		}

		int maxLength = 0;
		int length = 0;
		int l = 0, r = 0;
		long long buffer = 0;
		while (l < n && r < n)
		{
			if (buffer < q)
			{
				buffer += arr[r];
				length++;
				r++;
			}
			else if (buffer >= q)
			{
				buffer -= arr[l];
				length--;
				l++;
			}

			if (buffer <= q && length > maxLength)
			{
				maxLength = length;
			}
		}

		if (!maxLength)
			maxLength--;
		printf("Case #%d: %d\n", t + 1, maxLength);
	}

	return 0;
}