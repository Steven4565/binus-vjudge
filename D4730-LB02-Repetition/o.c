#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n, capacity, currentPlate;
		scanf("%d %d %d", &n, &capacity, &currentPlate);
		int preferredPlate = currentPlate;

		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			if (buffer > preferredPlate && buffer <= capacity)
				preferredPlate = buffer;
		}

		printf("Case #%d: ", t + 1);
		printf("%d\n", preferredPlate);
	}

	return 0;
}