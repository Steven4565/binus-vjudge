#include <stdio.h>
#include <stdbool.h>

int main()
{

	int test;
	scanf("%d", &test);
	for (int t = 0; t < test; t++)
	{

		int n, min;
		scanf("%d %d", &n, &min);

		int count = 0;

		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			if (buffer >= min)
			{
				count++;
			}
		}

		printf("Case #%d: %d\n", t + 1, count);
	}

	return 0;
}