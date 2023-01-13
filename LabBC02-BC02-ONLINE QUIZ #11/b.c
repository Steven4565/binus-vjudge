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
		int n, ticks;
		fscanf(handle, "%d %d\n", &n, &ticks);
		char arr[n][n];

		int upper, lower, left, right;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				fscanf(handle, "%c", &arr[i][j]);
				if (arr[i][j] == 'F')
				{
					upper = i;
					lower = i;
					left = j;
					right = j;
				}
			}
			fscanf(handle, "\n");
		}
		fscanf(handle, "\n");

		ticks--;

		upper -= ticks;
		lower += ticks;
		left -= ticks;
		right += ticks;

		printf("Case #%d:\n", t + 1);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= upper && i <= lower && j >= left && j <= right)
					printf("F");
				else
					printf("#");
			}
			puts("");
		}

		// if (t != test - 1)
		puts("");
	}

	fclose(handle);
	return 0;
}
