#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int fib(int n, int target)
{
	if (n == target)
	{
		return target;
	}
	if (n <= 1)
	{
		return 1;
	}
	else if (n % 2 == 0)
	{
		return fib(n / 2, target);
	}
	else
	{
		return fib(3 * n + 1, target);
	}
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int start, target;
		scanf("%d %d", &start, &target);

		int res = fib(start, target);
		printf("Case #%d: %s\n", t + 1, (res == target ? "YES" : "NO"));
	}

	return 0;
}