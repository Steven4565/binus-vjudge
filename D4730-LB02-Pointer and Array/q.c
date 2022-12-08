#include <stdio.h>

int main()
{

	long long test;

	scanf("%lld", &test);

	for (long long t = 0; t < test; t++)
	{

		int friends, lights, came;
		scanf("%d%d%d", &friends, &lights, &came);

		int lightsState[lights];
		for (int i = 0; i < lights; i++)
		{
			lightsState[i] = 0;
		}

		int pattern[friends][lights];

		for (int i = 0; i < friends; i++)
		{
			for (int j = 0; j < lights; j++)
			{
				scanf("%d", &pattern[i][j]);
			}
		}

		for (int i = 0; i < came; i++)
		{
			int friendIndex;
			scanf("%d", &friendIndex);
			for (int j = 0; j < lights; j++)
			{
				if (pattern[friendIndex - 1][j])
				{
					lightsState[j] = !lightsState[j];
				}
			}
		}

		printf("Case #%lld:\n", t + 1);
		for (int i = 0; i < lights; i++)
		{
			printf("%s\n", (lightsState[i] ? "YES" : "NO"));
		}
	}

	return 0;
}