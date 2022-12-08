#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[2000];
		scanf("%[^\n]%*c", str);

		printf("Case %d: ", t + 1);
		int length = strlen(str);
		for (int i = 0; i < length; i++)
		{
			printf("%d", str[i]);
			if (i != length - 1)
			{
				printf("-");
			}
		}

		puts("");
	}

	return 0;
}
