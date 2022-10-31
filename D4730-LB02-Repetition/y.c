#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d:\n", t + 1);

		int height, width;
		scanf("%d %d", &height, &width);

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
				{
					printf("#");
				}
				else
				{
					printf(" ");
				}
			}
			puts("");
		}
	}

	return 0;
}