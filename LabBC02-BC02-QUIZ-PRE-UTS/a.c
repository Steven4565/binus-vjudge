#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[200];
		scanf("%[^\n]%*c", str);
		int length = strlen(str);
		if (length % 2 == 1)
		{
			printf("NO\n");
			continue;
		}

		bool pair = true;

		for (int i = 0; i < length / 2; i++)
		{
			if (str[i] != str[i + (length / 2)])
			{
				pair = false;
			}
		}

		if (pair)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
}