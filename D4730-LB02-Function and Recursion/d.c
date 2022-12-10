#include <stdio.h>

int recurse(int n)
{
	if (n == 1)
		return 1;

	if (n % 2 == 1)
	{
		return recurse(n - 1) + recurse(n + 1);
	}
	else if (n != 0 && n % 2 == 0)
	{
		// printf("%d %d\n", n, n / 2);
		return recurse(n / 2);
	}
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int res = recurse(n);

		printf("Case #%d: %d\n", t + 1, res);
	}

	return 0;
}
