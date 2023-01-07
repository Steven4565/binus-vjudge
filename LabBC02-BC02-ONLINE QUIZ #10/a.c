#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		printf("Case %d: ", t + 1);
		int sum = 1;
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
				printf(" ");
			printf("%d", sum);
			sum += i + 1;
		}
		puts("");
	}

	return 0;
}
