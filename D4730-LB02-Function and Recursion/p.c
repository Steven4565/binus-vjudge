#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n <= 1 || n % 2 == 1)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const *argv[])
{

	int n;
	scanf("%d", &n);

	int res = fib(n);
	printf("%d\n", res);

	return 0;
}