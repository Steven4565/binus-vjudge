#include <stdio.h>

void printNumbers(char a, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", a);
	}
}

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d: ", t + 1);
		char ashiap[6] = {'a', 's', 'h', 'i', 'a', 'p'};
		for (int i = 0; i < 6; i++)
		{
			int buffer;
			scanf("%d", &buffer);
			printNumbers(ashiap[i], buffer);
		}
		printf("\n");
	}

	return 0;
}