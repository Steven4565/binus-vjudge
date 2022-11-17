#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool checkRow(int **mat, int row, int n)
{
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		arr[mat[i][row]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 1)
		{
			return false;
		}
	}

	return true;
}

bool checkCol(int **mat, int col, int n)
{
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		int index = mat[col][i];
		printf("index: %d\n", index);
		arr[mat[col][i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 1)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	scanf("%d", &n);

	int mat[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	bool yay = true;
	for (int i = 0; i < n; i++)
	{
		int colCheck[n];
		int rowCheck[n];
		for (int i = 0; i < n; i++)
		{
			colCheck[i] = 0;
			rowCheck[i] = 0;
		}

		// chekc row
		for (int row = 0; row < n; row++)
		{
			colCheck[mat[i][row] - 1]++;
			rowCheck[mat[row][i] - 1]++;
			if (colCheck[mat[i][row] - 1] > 1)
			{
				yay = false;
			}
			else if (rowCheck[mat[row][i] - 1] > 1)
			{
				yay = false;
			}
		}
	}

	printf("%s\n", (yay ? "Yay" : "Nay"));

	return 0;
}