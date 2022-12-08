#include <stdio.h>
#include <string.h>

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[1002];
		scanf("%[^\n]%*c", str);

		int length = strlen(str);

		printf("Case #%d : ", t + 1);
		for (int i = length - 1; i >= 0; i--)
		{
			printf("%c", str[i]);
		}

		puts("");
	}

	return 0;
}