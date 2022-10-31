#include <stdio.h>

char *inputLine()
{
	char *str;
	scanf("%[^\n]s", str);
	getchar();
	return str;
}

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d: ", t + 1);

		int strLength;
		scanf("%d%*c", &strLength);

		char stringInput[1000];
		scanf("%[^\n]%*c", stringInput);
		for (int i = 0; i < strLength; i++)
		{
			// int charInt = stringInput[i];
			// printf("%d\n", charInt);
			if (stringInput[i] >= 'a' && stringInput[i] <= 'z')
			{
				printf("%c", stringInput[i]);
			}
		}
		printf("\n");
	}

	return 0;
}