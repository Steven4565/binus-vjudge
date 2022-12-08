#include <stdio.h>

int main()
{

	long long test;

	scanf("%lld", &test);

	for (long long t = 0; t < test; t++)
	{
		int size;
		scanf("%d", &size);

		int arr[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				int buffer;
				scanf("%d", &buffer);
				arr[j] += buffer;
			}
		}

		printf("Case #%lld: ", t + 1);
		for (int i = 0; i < size; i++)
		{
			printf("%d", arr[i]);
			if (i != size - 1)
			{
				printf(" ");
			}
		}
		puts("");
	}

	return 0;
}