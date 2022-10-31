#include <stdio.h>
#include <math.h>

int main()
{
	scanf("%*d");

	for (int i = 0; i < 3; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);

		printf("%d\n", a / (int)pow(2, b));
	}

	return 0;
}