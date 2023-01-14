#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{

	FILE *handle = fopen("testdata.in", "r");

	int test;
	fscanf(handle, "%d\n", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		fscanf(handle, "%d\n", &n);

		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			long long amount;
			long long price;
			fscanf(handle, "%lld#%*[^@]@%lld", &amount, &price);
			sum += amount * price;
		}

		int discount = sum / 100 * 15;
		int total = sum - discount;

		printf("Case #%d: %d\n", t + 1, total);
	}

	fclose(handle);

	return 0;
}
