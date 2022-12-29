#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

	int n, removeCount;
	scanf("%d %d", &n, &removeCount);

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int remove[removeCount];
	for (int i = 0; i < removeCount; i++)
	{
		scanf("%d", &remove[i]);
	}

	int max = -1;
	for (int i = 0; i < n; i++)
	{
		bool found = false;
		for (int j = 0; j < removeCount; j++)
		{
			if (remove[j] == arr[i])
			{
				found = true;
				break;
			}
		}
		if (!found && arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("Maximum number is %d\n", max);

	return 0;
}