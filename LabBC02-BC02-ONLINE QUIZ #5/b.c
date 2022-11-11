#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int finish;
		scanf("%d", &finish);
		int pos = 0;
		int jump = 1;
		int count = 0;

		while (1)
		{
			if (pos >= finish)
			{
				break;
			}

			pos += jump;
			jump++;
			count++;
		}

		printf("Case #%d: %d\n", t + 1, count);
	}

	return 0;
}