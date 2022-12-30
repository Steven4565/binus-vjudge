#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

long long calculate(long long n)
{
	return (n * (n + 1) * ((2 * n) + 1)) / 6;
}

long long search(long long l, long long r, long long x)
{
	if (r >= l)
	{
		long long m = l + (r - l) / 2;

		if (calculate(m) == x || (m != 0 && calculate(m) > x && calculate(m - 1) < x))
			return m;

		if (calculate(m) >= x)
			return search(l, m - 1, x);
		return search(m + 1, r, x);
	}
	return -1;
}

int main()
{

	int test;
	scanf("%d", &test);
	for (int t = 0; t < test; t++)
	{
		long long query;
		scanf("%lld", &query);

		long long res = search(0, 1442250, query);
		printf("Case #%d: %lld\n", t + 1, res);
	}

	return 0;
}