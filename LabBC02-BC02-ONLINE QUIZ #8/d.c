#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{

		int doors, numbers;
		scanf("%d%d", &doors, &numbers);

		bool openedDoors[doors + 1];
		for (int i = 0; i < doors + 1; i++)
		{
			openedDoors[i] = false;
		}

		for (int i = 0; i < numbers; i++)
		{
			int number;
			scanf("%d", &number);
			for (int j = number; j <= doors; j += number)
			{
				openedDoors[j] = !openedDoors[j];
			}
		}

		printf("Case #%d: ", t + 1);

		int counter = 0;
		for (int i = 1; i <= doors; i++)
		{
			if (openedDoors[i] == false)
			{
				counter++;
			}
		}

		int printCounter = 0;
		for (int i = 1; i <= doors; i++)
		{
			if (openedDoors[i] == false)
			{
				printCounter++;
				printf("%d", i);
				if (printCounter != counter)
				{
					printf(" ");
				}
			}
		}

		if (counter == 0)
		{
			printf("No room left!");
		}
		puts("");
	}

	return 0;
}