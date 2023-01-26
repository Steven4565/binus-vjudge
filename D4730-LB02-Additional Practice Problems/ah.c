#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

#define int long long

char arr[500][500][20];

signed main()
{
	FILE *handle = fopen("testdata.in", "r");

	int row, col;
	fscanf(handle, "%lld %lld\n", &row, &col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			fscanf(handle, "%[^;];", arr[i][j]);
		fscanf(handle, "\n");
	}

	int q;
	fscanf(handle, " %lld", &q);

	for (int i = 0; i < q; i++)
	{
		int rowIdx;
		char headerQuery[10];
		int colIdx = -1;
		char replacement[10];

		fscanf(handle, "%lld %s %s\n", &rowIdx, headerQuery, replacement);
		for (int j = 0; j < col; j++)
		{
			if (!strcmp(arr[0][j], headerQuery))
			{
				colIdx = j;
				break;
			}
		}
		if (colIdx < 0 || rowIdx < 2 || rowIdx > row)
			continue;

		strcpy(arr[rowIdx - 1][colIdx], replacement);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%s;", arr[i][j]);
		}
		puts("");
	}

	fclose(handle);

	return 0;
}
