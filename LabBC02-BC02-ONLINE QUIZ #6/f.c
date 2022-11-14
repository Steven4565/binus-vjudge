#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int query, replace;
		scanf("%d%d", &query, &replace);
		arr[query - 1] = replace;

		printf("Case #%d: ", t + 1);
		for (int j = 0; j < n; j++)
		{
			printf("%d", arr[j]);
			if (j != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}
