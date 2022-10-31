#include <stdio.h>

int main()
{

	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long buffer;
		scanf("%lld", &buffer);

		sum += (buffer > 0 ? buffer : 0);
	}
	printf("%lld\n", sum);

	return 0;
}