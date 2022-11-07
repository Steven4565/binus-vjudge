#include <stdio.h>
#include <string.h>

int main()
{

	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[1001];
		scanf("%[^\n]%*c", str);

		printf("Case #%d:\n", t + 1);

		int length = strlen(str);
		for (int i = 0; i < length; i++)
		{
			if (str[i] > 'U' - 1)
			{
				printf("U");
			}
			else if (str[i] > 'O' - 1)
			{
				printf("O");
			}
			else if (str[i] > 'I' - 1)
			{
				printf("I");
			}
			else if (str[i] > 'E' - 1)
			{
				printf("E");
			}
			else
			{
				printf("A");
			}
		}
		puts("");

		for (int i = 0; i < length; i++)
		{
			if (str[i] > 'U' - 1)
			{
				printf("%d", str[i] - 'U');
			}
			else if (str[i] > 'O' - 1)
			{
				printf("%d", str[i] - 'O');
			}
			else if (str[i] > 'I' - 1)
			{
				printf("%d", str[i] - 'I');
			}
			else if (str[i] > 'E' - 1)
			{
				printf("%d", str[i] - 'E');
			}
			else
			{
				printf("%d", str[i] - 'A');
			}
		}
		puts("");
	}

	return 0;
}