#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int max = -1, maxCount = 0;

		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			if (buffer > max)
			{
				maxCount = 0;
				max = buffer;
			}
			else if (buffer == max)
			{
				maxCount++;
			}
		}

		printf("Case #%d: ", t + 1);
		printf("%d", maxCount + 1);
		puts("");
	}

	return 0;
}