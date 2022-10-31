#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		long long a, b, c, d;
		scanf("(%lld+%lld)x(%lld-%lld)%*c", &a, &b, &c, &d);

		printf("%lld", (a + b) * (c - d));
		if (i != 2)
		{
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}