#include <stdio.h>

void recurse(int *arr, int index, int n, int *sum)
{
	if (index == n)
		return;

	(*sum) = (*sum) + arr[index];
	recurse(arr, index + 1, n, sum);
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		int res = 0;
		recurse(arr, 0, n, &res);

		printf("Case #%d: %d\n", t + 1, res);
	}

	return 0;
}
