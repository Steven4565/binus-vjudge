#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n, odd = 0, even = 0;
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			(buffer % 2 ? odd++ : even++);
		}

		printf("Odd group : %d integer(s).\n", odd);
		printf("Even group : %d integer(s).\n", even);

		puts("");
	}

	return 0;
}