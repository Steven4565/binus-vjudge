#include <stdio.h>

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);

	for (int i = 0; i <= b; i++)
	{
		printf("%d\n", a + i);
	}

	return 0;
}