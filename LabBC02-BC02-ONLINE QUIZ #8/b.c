#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n, m, q;
	scanf("%d%d%d", &m, &n, &q);

	int arr[m][n];
	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < q; i++)
	{
		int x, y, value;
		scanf("%d%d%d", &x, &y, &value);

		arr[x][y] = value;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
			if (j != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}
