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

		char str[100];
		sprintf(str, "%d", n);
		char *rev = strrev(str);

		char *end;
		printf("Case #%d: %ld\n", t + 1, n + strtol(rev, &end, 10));
	}

	return 0;
}
