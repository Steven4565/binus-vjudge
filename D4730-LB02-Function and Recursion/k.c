#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int fib(int a, int b, int n)
{
	if (n == 0)
		return a;
	if (n == 1)
		return b;

	return fib(a, b, n - 1) + fib(a, b, n - 2);
}

int main(int argc, char const *argv[])
{

	int a, b;
	scanf("%d %d", &a, &b);
	int n;
	scanf("%d", &n);

	int res = fib(a, b, n);
	printf("%d\n", res);

	return 0;
}