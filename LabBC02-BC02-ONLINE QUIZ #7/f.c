#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long arr[n];
	int arrCount = 0;

	for (int i = 0; i < n; i++)
	{
		long long buffer;
		scanf("%lld", &buffer);

		bool exists = false;
		for (int j = 0; j < arrCount; j++)
		{
			if (arr[j] == buffer)
			{
				exists = true;
				break;
			}
		}

		if (!exists)
		{
			arr[arrCount] = buffer;
			arrCount++;
		}
	}

	printf("%d\n", arrCount);

	return 0;
}