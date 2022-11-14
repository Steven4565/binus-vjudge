#include <stdio.h>
#include <string.h>

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[1010];
		scanf("%[^\n]%*c", str);
		int length = strlen(str);

		int n;
		scanf("%d%*c", &n);

		for (int i = 0; i < n; i++)
		{
			char query, replace;
			scanf("%c %c%*c", &query, &replace);
			for (int j = 0; j < length; j++)
			{
				if (str[j] == query)
				{
					str[j] = replace;
				}
			}
		}

		printf("Case #%d: %s\n", t + 1, str);
	}

	return 0;
}