#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkInt(char ch)
{
	if (ch == '0')
		return true;
	else if (ch > '1' && ch < '9')
		;
	return true;

	return false;
}

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d: ", t + 1);

		char str[1000];
		scanf("%[^\n]%*c", str);

		bool ipv10 = true;

		if (strlen(str) != 11)
		{
			ipv10 = false;
		}

		for (int i = 0; i < 11; i++)
		{
			if ((i % 2 == 1) && str[i] != '.')
			{
				ipv10 = false;
			}
			else if ((i % 2 == 0) && (str[i] < '0' || str[i] > '9'))
			{
				ipv10 = false;
			}
		}

		printf("%s", ipv10 ? "YES" : "NO");

		printf("\n");
	}

	return 0;
}