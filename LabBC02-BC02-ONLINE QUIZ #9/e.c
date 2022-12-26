#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int fib(int a, int b, int n)
{
	if (n == 0)
		return a;
	if (n == 1)
		return b;

	return fib(a, b, n - 1) - fib(a, b, n - 2);
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int a, b, n;
		scanf("%d %d %d", &n, &a, &b);

		int res = fib(a, b, n);
		printf("Case #%d: %d\n", t + 1, res);
	}

	return 0;
}