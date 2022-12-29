#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int test;
	fscanf(handle, "%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		fscanf(handle, "%d", &n);

		int arr[n];
		int area = 0;
		int perimeter = 0;
		for (int i = 0; i < n; i++)
		{
			fscanf(handle, "%d", &arr[i]);
			area += arr[i] * 4;
			perimeter += 4;
		}

		perimeter += arr[0] * 2;
		perimeter += arr[n - 1] * 2;

		for (int i = 0; i < n; i++)
		{
			int lowerBound = i - 1;
			int upperBound = i + 1;
			if (lowerBound >= 0)
			{
				int difference = arr[i] - arr[lowerBound];
				if (difference > 0)
					perimeter += difference * 2;
			}
			if (upperBound < n)
			{
				int difference = arr[i] - arr[upperBound];
				if (difference > 0)
					perimeter += difference * 2;
			}
		}

		printf("Case #%d: %d %d\n", t + 1, perimeter, area);
	}

	fclose(handle);

	return 0;
}