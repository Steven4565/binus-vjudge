#include <stdio.h>

long long fib(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int test;
	scanf("%d", &test);

	long long fib[90];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < 90; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);
		printf("Case #%d: %lld\n", t + 1, fib[n - 1]);
	}

	return 0;
}