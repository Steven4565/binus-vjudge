#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int n;
	scanf("%d", &n);

	int counter[n + 1];
	for (int i = 0; i <= n; i++)
	{
		counter[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int buffer;
			scanf("%d", &buffer);
			counter[buffer]++;
		}
	}

	int incomplete = 0;
	for (int i = 1; i <= n; i++)
	{
		if (counter[i] < n)
		{
			incomplete++;
		}
	}

	printf("%d\n", incomplete);

	return 0;
}