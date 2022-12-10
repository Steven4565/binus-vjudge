#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int recurse(int n, int *count)
{
	(*count)++;
	if (n <= 1)
		return 1;
	else
		return recurse(n - 1, count) + recurse(n - 2, count);
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d%*c", &n);

		int count = 0;
		recurse(n, &count);
		printf("Case #%d: %d\n", t + 1, count);
	}

	return 0;
}
