#include <stdio.h>

int main()
{

	long long test;

	scanf("%lld", &test);

	for (long long t = 0; t < test; t++)
	{
		long long row, col;
		scanf("%lld%lld", &row, &col);

		long long sum = 0;

		for (long long i = 0; i < row; i++)
		{
			long long max = -1;
			for (long long j = 0; j < col; j++)
			{
				long long buffer;
				scanf("%lld", &buffer);
				max = buffer > max ? buffer : max;
			}

			sum += max;
		}

		printf("Case #%lld: %lld\n", t + 1, sum);
	}

	return 0;
}