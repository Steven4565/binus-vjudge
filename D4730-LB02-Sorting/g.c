#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{

	int test;
	scanf("%d", &test);
	for (int t = 0; t < test; t++)
	{
		int n, time;
		scanf("%d%d", &n, &time);

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int counter = 0;

		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(&arr[j], &arr[j + 1]);
					counter++;
				}
			}
		}

		printf("Case #%d: %d\n", t + 1, time * counter);
	}

	return 0;
}