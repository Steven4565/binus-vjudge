#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	int n;
	scanf("%d", &n);

	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int buffer;
			scanf("%d", &buffer);
			arr[i][j] = buffer;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", arr[j][i]);
			if (j != n - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}
