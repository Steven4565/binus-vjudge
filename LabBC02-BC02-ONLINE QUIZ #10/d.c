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

		int min, max;
		fscanf(handle, "%d %d\n", &min, &max);

		int valid = 0;
		int prev0 = -1;
		for (int i = 0; i < n; i++)
		{
			char buffer;
			fscanf(handle, " %c", &buffer);
			if (buffer == '0')
			{
				int consecutives = i - prev0 - 1;
				if (consecutives >= min && consecutives <= max)
					valid++;
				prev0 = i;
			}
		}

		printf("Case #%d: %d\n", t + 1, valid);
	}

	fclose(handle);

	return 0;
}
