#include <stdio.h>

int main()
{

	int ops;
	scanf("%d", &ops);
	long long res = 1;

	for (int i = 0; i < ops; i++)
	{
		res = (res * 2) + 1;
	}

	printf("%lld\n", res);

	return 0;
}