#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void print(int *arr, int size, int curIndex, int sum)
{
	int left = 2 * (curIndex + 1) - 1;
	int right = 2 * (curIndex + 1);

	if (left >= size && right >= size)
	{
		printf("%d\n", sum);
	}

	for (int i = left; i <= right; i++)
	{
		if (i < size)
		{
			print(arr, size, i, sum + arr[i]);
		}
	}
}

void testcase(int test)
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Case #%d:\n", test + 1);

	print(arr, n, 0, arr[0]);
}

int main(int argc, char const *argv[])
{

	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		testcase(i);
	}

	return 0;
}
