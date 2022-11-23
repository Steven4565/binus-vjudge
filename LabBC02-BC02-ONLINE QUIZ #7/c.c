#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

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