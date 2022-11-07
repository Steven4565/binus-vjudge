#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

long long getMaxPower(long long a)
{
	long long counter = 0;
	while (a != 0)
	{
		a /= 10;
		counter++;
	}
	return counter;
}

long long power(int n)
{
	long long res = 10;
	for (int i = 0; i < n; i++)
	{
		res *= 10;
	}
	return res;
}

int main()
{

	long long test;
	scanf("%lld%*c", &test);

	for (long long t = 0; t < test; t++)
	{
		long long a, b;
		scanf("%lld%lld", &a, &b);

		long long maxDigit = (getMaxPower(a) > getMaxPower(b) ? getMaxPower(a) : getMaxPower(b)) - 1;
		// printf("%d %d\n", getMaxPower(a), getMaxPower(b));

		long long res = 0;
		long long curPow = 0;
		while (a != 0 && b != 0 && curPow <= maxDigit)
		{
			long long num = 0;
			num = (a % 10 + b % 10) % 10;
			a /= 10;
			b /= 10;
			res += num * pow(10, curPow);
			curPow++;
		}

		curPow = (curPow <= 0 ? 0 : curPow);
		// printf("num: %d\n", pow(10, curPow));
		if (a != 0)
			res += a * pow(10, curPow);
		if (b != 0)
			res += b * pow(10, curPow);

		printf("Case #%lld: %lld\n", t + 1, res);
	}

	return 0;
}