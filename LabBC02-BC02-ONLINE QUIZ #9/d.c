#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("Case #%d: ", t + 1);
		double result = log10(b) / log10(a);
		printf("%.0lf\n", floor(result));
	}

	return 0;
}