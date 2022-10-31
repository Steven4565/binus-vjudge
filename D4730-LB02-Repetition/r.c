#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n, prevHouse, minDiff = -1;
		scanf("%d %d", &n, &prevHouse);

		for (int i = 1; i < n; i++)
		{
			int height;
			scanf("%d", &height);

			if (minDiff == -1)
			{
				minDiff = abs(prevHouse - height);
			}
			else if (abs(prevHouse - height) < minDiff)
			{
				minDiff = abs(prevHouse - height);
			}
			prevHouse = height;
		}

		printf("Case #%d: ", t + 1);
		printf("%d\n", minDiff);
	}

	return 0;
}