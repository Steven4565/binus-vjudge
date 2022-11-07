#include <stdio.h>
#include <stdbool.h>

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		int flag[300];
		for (int i = 0; i < 300; i++)
		{
			flag[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			bool found = false;
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (k != j && arr[j] + arr[k] == arr[i])
					{
						// printf("%d + %d = %d\n", arr[j], arr[k], arr[i]);
						flag[arr[i]]++;
						;
						found = true;
						break;
					}
				}
				if (found)
					break;
			}
		}

		int counter = 0;
		for (int i = 0; i < 300; i++)
		{
			if (flag[i])
			{
				counter += flag[i];
			}
		}

		printf("Case #%d: %d\n", t + 1, counter);
	}

	return 0;
}