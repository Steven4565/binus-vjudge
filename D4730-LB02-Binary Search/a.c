#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int search(int *arr, int l, int r, int x)
{
	if (r >= l)
	{
		int m = l + (r - l) / 2;

		if (arr[m] == x && (m == 0 || arr[m - 1] != x)) // check if left is not the same
			return m;

		if (arr[m] >= x) // left might be the same, then go to left
			return search(arr, l, m - 1, x);
		return search(arr, m + 1, r, x);
	}
	return -1;
}

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);

	int list[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < m; i++)
	{
		int query;
		scanf("%d", &query);
		int res = search(list, 0, n - 1, query);
		printf("%d\n", (res == -1 ? -1 : res + 1));
	}

	return 0;
}